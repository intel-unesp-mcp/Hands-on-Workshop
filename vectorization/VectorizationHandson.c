#include <stdio.h>

void quad(int length, double * a, double * b, double * c, double * x1, double * x2)
{
  int i;
  for (i=0; i<length; i++) {
    float s = b[i]*b[i] - 4*a[i]*c[i];
    if ( s >= 0 ) {
      s = sqrt(s) ;
      x2[i] = (-b[i]+s)/(2.*a[i]);
      x1[i] = (-b[i]-s)/(2.*a[i]);
    }
    else {
      x2[i] = 0.;
      x1[i] = 0.;
    }
  }
}


void add_floats(double *a, double *b, double *c, double *d, double *e, int n){
  int i,j;
  
  for (i=1; i<n-1; i++){
    
    for (j=n; j>0; j--){
      a[i] =e[j] + (c[i+1] * d[j]) ;
      b[i] =e[i] + (c[i+1] * d[j]) ;
    }
  }
  printf("a[n-1] %f",a[n-1]);
}

int main(int argc, char * argv[])
{
  int i,n;
  
  double *a, *b, *c, *d, *e, *x1,*x2;
  double randV;

  n=70000;
  
  a = (double *) malloc(n*(sizeof (double)));
  b = (double *) malloc(n*(sizeof (double)));
  c = (double *) malloc(n*(sizeof (double)));
  d = (double *) malloc(n*(sizeof (double)));
  e = (double *) malloc(n*(sizeof (double)));
  x1 = (double *) malloc(n*(sizeof (double)));
  x2 = (double *) malloc(n*(sizeof (double)));

  srand(time(NULL));
  randV=rand();
  randV=randV*0.11;

  for (i=0; i<n; i++){
    a[i] = randV*i;
    b[i] = randV-i;
    c[i] = randV+i;
    d[i] = randV*i;
    e[i] = randV-i;
    x1[i] = randV*i;
    x2[i] = randV+i;
  }
  int k = 4;
  int cc = 5;
  int m;
  m = n-k-2;

  add_floats(a,b,c,d,e,n);
  //quad(n, a,b,c,x1, x2);

  printf("Vectorization Example!\n");
}
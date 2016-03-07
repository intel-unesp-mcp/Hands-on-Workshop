#include <stdio.h>
#include <stdlib.h>

void add_floats(double *a, double *b, double *c, double *d, double *e, int n){
  int i;

  for (i=0; i<n; i++){
    a[i] = a[i-1] + b[i] + c[i] + d[i] + e[i];
  }
  printf("a[n-1] %f",a[n-1]);
}

int main(int argc, char * argv[])
{
  int i,n;
  double *a, *b, *c, *d, *e;

n=1000;
  
a = (double *) malloc(n*(sizeof (double)));
b = (double *) malloc(n*(sizeof (double)));
c = (double *) malloc(n*(sizeof (double)));
d = (double *) malloc(n*(sizeof (double)));
e = (double *) malloc(n*(sizeof (double)));

  for (i=0; i<n; i++){
    a[i] = 1;
    b[i] = 2;
    c[i] = 3;
    d[i] = 4;
    e[i] = 5;
  }
  printf("Pragma Simd Example!\n");
  add_floats(a,b,c,d,e,n);
}


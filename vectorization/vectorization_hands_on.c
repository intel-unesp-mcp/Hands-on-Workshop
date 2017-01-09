#include <stdio.h>
#include "func.h"

int main(int argc, char * argv[])
{
  int i,n;
  
  double *a, *b, *c, *d, *e, *x1,*x2;
  double randV;

  //n=2000;
n=20000;

  
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
  quad(n, a,b,c,x1, x2);
  quad2();

  printf("Vectorization Example!\n");
}

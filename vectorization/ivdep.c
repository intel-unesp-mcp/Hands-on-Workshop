#include <stdio.h>
#include <stdlib.h>

void add_floats(double *a, int *b, double *c, double *d, double *e, int n){
  int i;
  
  for (i=1; i<n; i++){
    a[b[i]] = a[b[i]] * c[b[i]] + d[b[i]] + e[b[i]];
  }
}

int main(int argc, char * argv[])
{
  int i,n;
double *a, *c, *d, *e;
  int *b;
  n=10000;

  a = (double *) malloc(n*(sizeof (double)));
  b = (int *) malloc(n*(sizeof (int)));
  c = (double *) malloc(n*(sizeof (double)));
  d = (double *) malloc(n*(sizeof (double)));
  e = (double *) malloc(n*(sizeof (double)));

  for (i=0; i<n; i++){
    a[i] = 1;
    b[i] = i;
    c[i] = 3;
    d[i] = 4;
    e[i] = 5;
  }
  printf("Pragma ivdep Example!\n");
  add_floats(a,b,c,d,e,n);
}


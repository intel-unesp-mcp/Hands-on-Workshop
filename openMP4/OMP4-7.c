#include <stdio.h>
#include <unistd.h>

#pragma omp declare target 

int NNN = 900000000;

double min (double a, double b) { 
  return a < b ? a : b; 
}

double distsq(double x, double y) {
  return((x-y)*(x-y));
}

#pragma omp end declare target

int main() {
    #pragma omp target 
    { 

  srand(time(NULL));
  double rr = rand();
  int i;

  double *a = (double*) malloc(NNN*sizeof(double));
  double *b = (double*) malloc(NNN*sizeof(double));
  double *c = (double*) malloc(NNN*sizeof(double));
  double *d = (double*) malloc(NNN*sizeof(double));

  for ( i = 0 ; i < NNN; i++ ) { 
    a[i] = rand();
    b[i] = rand();
    c[i] = rand();
    d[i] = 0;
  }

  #pragma omp for
  for (i=0; i<NNN; i++)
    d[i] = min( distsq(a[i], b[i]), c[i] ) ;

  printf("a %f b %f c %f d %f\n", a[11], b[11], c[11], d[11]);
}
}

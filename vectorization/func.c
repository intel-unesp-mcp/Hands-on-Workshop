#include "func.h"

void quad(int length, double * a, double * b, double * c, double * x1, double * x2)
{
  int i,j;
  for (j=1; j<length; j++){
  for (i=0; i<length; i++) {
    float s = b[i]*b[i] - 4*a[i]*c[i];
      s = sqrt(s) ;
    if ( s >= 0 ) {
      x2[i] = (-b[i]+s)+(2.*a[i]);
      x1[i] = (-b[i]-s)+(2.*a[i]);
    }
    else {
      x2[i] = s+1;
      x1[i] = s+1;
    }
  }
  }
}

void add_floats(double *a, double *b, double *c, double *d, double *e, int n){
  int i,j;

  for (j=1; j<n-1; j++){

    for (i=1; i<n-1; i++){
      a[i] =e[j] + (c[i] * d[j]) ;
      b[i] =e[i] + (c[i] * d[j]) ;
    }
  }
//  printf("a[n-1] %f",a[n-1]);
}

void quad2()
{
  int i,j;
  float randV;

  for(j=0; j<10000; j++) {
    for(i=0; i<40000; i++) {
      /*obj[i].x=i + randV;    
      obj[i].y=i*i+ randV;  
      obj[i].z=i+i+ randV;*/
      obj.x[i]=i + randV;    
      obj.y[i]=i*i+ randV;  
      obj.z[i]=i+i+ randV;
    }
    randV=rand();
    randV=randV*0.11;

  }
}

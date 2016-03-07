#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void quad(int length, float * a, float * b, float * c, float * x1, float * x2)
{

  for (int i=0; i<length; i++) {
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

int main(int argc, char * argv[])
{
  return(0);
}



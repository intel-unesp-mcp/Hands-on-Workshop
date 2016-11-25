#include <stdio.h> 
#include <unistd.h>

#pragma omp declare target

int a,b,c;

int sum,mult;

int sum2(int a, int b, int c) {      
  sum=a+b+c; 
}

int multiply2() {      
  mult=sum*sum; 
}

#pragma omp end declare target

int main() {
        a=rand();
        b=rand();
        c=rand();
        sum=0;
        mult=0;

  //put your code here...


}

#include <time.h>

struct coordinate {
    float x, y, z;
} obj[40000];

/*struct coordinate {
    float x[40000], y[40000], z[40000];
} obj;*/

int main(){

  int i,j;
  float randV;

  srand(time(NULL));
  randV=rand();
  randV=randV*0.21;
  printf("randV %f\n", randV);

  for(j=0; j<10000; j++) {

    for(i=0; i<40000; i++) {
      obj[i].x=i + randV;    
      obj[i].y=i*i+ randV;  
      obj[i].z=i+i+ randV;
    }

    /*for(i=0; i<40000; i++) {
      obj.x[i]=i+i+ randV;
      obj.y[i]=i-i+ randV;
      obj.z[i]=i*i+ randV;
    }*/

    randV=rand();
    randV=randV*0.21;
   
    for(i=0; i<40000; i++) {
      obj[i].x=    obj[i].y+  obj[i].z + randV;
    }
	
    /*for(i=0; i<40000; i++) {
      obj.x[i]= obj.y[i]+ obj.z[i] + randV;
    }*/

  }
}

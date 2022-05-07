#include "lib.h"
float max(float numeri[], int a){
  float b=0;
  for(int i=0; i<a; i++){
    if (b<numeri[i]){
      b=numeri[i];
    }
  }
  return b;
}

#include "lib.h"
float max(float numeri[], ind a){
  float b=0;
  for(int i=0; i<a; i++){
    if (b<numeri[i]){
      b=numeri[i];
    }
  }
  return b;
}

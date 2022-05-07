#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int b=0;
  cin>> b;
  float numeri[b];
  for(int i=0; i<b; i++){
    cin>> numeri[i];
  }
  cout<< max (numeri,b)
  return 0;
}

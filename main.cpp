#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int a=0;
  cin>> a;
  float numeri[a];
  for(int i=0; i<a; i++){
    cin>> numeri[i];
  }
  cout<< max (numeri[a],a)
  return 0;
}

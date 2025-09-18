#include <iostream>
using namespace std;
int main(){
  unsigned n ;
  cin  >> n;
  unsigned high = (n >> 16);
  unsigned low = n&((1<<16)-1);
  cout << ((low<<16)|high);
}
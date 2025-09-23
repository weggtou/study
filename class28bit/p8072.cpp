#include <iostream>
using namespace std;

int main(){
  int x;
  cin >> x;
  int test =0;
  while((1<<test)<x){
    test++;
  }
  cout << (1<<test) << ' ';
  int cut = 0;
  while(x%(1<<test)!=0){
    test--;
    cut++;
  }
  cout << cut;
}
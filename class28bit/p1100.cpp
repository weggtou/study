#include <iostream>
#include <bitset>
using namespace std;

int main(){
  int x;
  cin >> x;
  bitset<32> all,change;
  int wei = 0;
  do{
    if(x%2){
      all.set(wei);
    }
    wei++;
    x/=2;
  }while(x!=0);

  for(int i = 0;i<=15;i++){
    if(all.test(i)){
      change.set(16+i);
    }
  }
  for(int i = 16;i<=31;i++){
    if(all.test(i)){
      change.set(i-16);
    }
  }

  cout << change.to_ullong();
}
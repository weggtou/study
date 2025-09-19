#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  int ret = 0;
  while(n--){
    int x;
    scanf("%d",&x);
    ret ^= x;
  }
  cout << ret << endl;
}
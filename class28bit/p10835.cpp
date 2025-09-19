#include <iostream>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int n,m;
    cin >> n >> m;
    if(m&1){
      cout << (n==0?"Yes":"No")<<endl;
    }else{
      cout << (n!=0?"Yes":"No")<<endl;
    }
  }
}
#include<iostream>
using namespace std;
int main(){
  int t;
  cin >> t;
  while(t--){
    int x,y;
    cin >> x >>y;
    cout << ((x==1&&y==2)||(x==2&&y==1) ?"Yes":"No") <<endl;
  }
}
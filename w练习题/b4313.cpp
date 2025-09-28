#include <bits/stdc++.h>
using namespace std;

int main(){
  int l,e;
  cin >> l >> e;
  if(l<3){
    cout << "Impossible";
  }else if(l>=8||(l>=6&&e==1)){
    cout << 3;
  }else{
    cout << 6;
  }
}
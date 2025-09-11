#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  queue <int> all;
  for(int i =1;i<=n;i++){
    all.push(i);
  }

  int cont = 0;
  while(!all.empty()){
    cont++;
    int i = all.front();
    if(cont==m){
      cout << i << ' ';
      all.pop();
      cont = 0;
    }else{
      all.pop();
      all.push(i);
    }
  }
}
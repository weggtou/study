#include <bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  multimap <long long,int> all;
  for(int i = 1;i<=n;i++){
    long long x;
    cin >> x;
    all.emplace(x,i);
  }

  while(m--){
    long long q;
    cin >> q;
    if(all.find(q)!=all.end()){
      cout << (*all.find(q)).second << ' ';
    }else{
      cout << -1 << ' ';
    }
  }
}
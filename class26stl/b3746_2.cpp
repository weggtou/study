#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  using dote = pair <long long,int>;
  priority_queue <dote,vector<dote>,decltype([](dote a,dote b){
    if (a.first!=b.first){return a.first>b.first;}
    else {return a.second>b.second;}
  })> all;
  vector <vector<int>> store(n);

  for(int i =1;i<=n;i++){
    all.emplace(0,i);
  }

  int m;
  cin >> m;
  for(int i = 1;i<=m;i++){
    long long x;
    cin >> x;
    auto first = all.top();
    all.emplace(first.first+x,first.second);
    all.pop();
    store[first.second-1].push_back(i);
  }

  for(auto &i:store){
    if(i.empty()){
      cout << 0;
    }else{
      for(auto &g:i){
        cout << g << ' ';
      }
    }
    cout << endl;
  }
}
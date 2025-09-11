#include <bits/stdc++.h>
using namespace std;

int main(){
  using dote = pair<long long,int>;
  multiset <dote> all;
  int n ;
  cin >> n;
  vector <vector<int>> vec(n); 
  
  for(int i=1;i<=n;i++){
    all.emplace(0,i);
  }

  int m;
  cin >> m;
  for (int i =1;i<=m;i++){
    long long t;
    cin >> t;
    auto lin = *all.begin();
    all.emplace(lin.first+t,lin.second);
    vec[lin.second-1].push_back(i);
    all.erase(all.begin());
  }

  for(auto &i:vec){
    if (i.empty()){
      cout << 0;
    }else{
      for (auto &g:i){
        cout << g << ' ';
      }
    }
    
    cout <<endl;
  }

}
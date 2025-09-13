#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
  using card = pair <int,int>;
  int n,m,r;
  cin >> n >> m >> r;
  vector <card> fs(n);
  vector <int> flower(n);
  map <int,vector<int>> f;
  for(auto &i:fs){
    int x;
    cin >> x;
    i.first = x;
  }
  for(auto &i:fs){
    int x;
    cin >> x;
    i.second = x;
  }
  for(auto &i:flower){
    cin >> i;
  }
  for(auto &i:flower){
    int x;
    cin >> x;
    f[i].push_back(x);
  }
  
  while (n--){
    int index;
    cin >> index;
    int fw = fs[index-1].first;
    ranges::sort(f[fw]);
    auto x=ranges::upper_bound(f[fw],fs[index-1].second);
    
    if(x != f[fw].end()){
      f[fw].erase(x);
    }
  }

  int cont = 0;
  for(auto &i:f){
    if(!i.second.empty()){
      cont +=i.second.size();
    }
  }
  cout << cont;

}

#include <iostream>
#include <unordered_map>
#include <set>
using namespace std;

int main(){
  int n;
  cin >> n;
  unordered_map <string,set<int>> all;
  for (int i =1;i<=n;i++){
    int x;
    cin >> x;
    while(x--){
      string a;
      cin >> a;
      all[a].insert(i);
    }
  }
  int nang;
  cin >> nang;
  while(nang--){
    string x;
    cin >> x;
    for(auto &i:all[x]){
      cout << i << ' ';
    }
    cout << endl;
  }
}
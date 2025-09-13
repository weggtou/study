#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  while(N--){
    unordered_set <int> all;
    vector <int> all2;
    int n;
    cin >> n;
    while(n--){
      int x;
      cin >> x;
      if(all.find(x)==all.end()){
        all.insert(x);
        all2.push_back(x);
      }
    }
    for(auto &i:all2){
      cout << i << ' ';
    }
    cout << endl;
  }
}
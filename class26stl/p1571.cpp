#include <iostream>
#include <unordered_set>
#include <queue>
using namespace std;

int main(){
  int n,m;
  cin >> n >> m;
  unordered_set <long long> gonxian;
  queue <long long> keji;
  while(n--){
    long long bian;
    cin >> bian;
    keji.push(bian);
  }

  while(m--){
    long long bian;
    cin >> bian;
    gonxian.insert(bian);
  }

  while(!keji.empty()){
    long long x = keji.front();
    if(gonxian.find(x)!=gonxian.end()){
      cout << x<<' ';
    }
    keji.pop();
  }
}
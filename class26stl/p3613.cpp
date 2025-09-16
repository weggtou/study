#include <iostream>
#include <unordered_map>
#include <map>
#include <vector>
using namespace std;

int main(){
  int n,q;
  cin >> n >> q;
  vector <unordered_map<int,int>> all(n);
  while(q--){
    int que;
    cin >> que;
    if(que == 1){
      int i,j,k;
      cin>> i>>j>>k;
      all[i-1][j]=k;
    }else{
      int i,j;
      cin >> i>> j;
      cout << all[i-1][j] << endl;
    }
  }
}
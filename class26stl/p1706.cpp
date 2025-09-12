#include <bits/stdc++.h>
using namespace std;

int main(){
  vector <int> all;
  int n;
  cin >> n;
  for (int i=1;i<=n;i++){
    all.push_back(i);
  }

  do{
    for(int &i:all){
      cout << format("{:>5}",i);
    }
    cout << endl;
  }while(next_permutation(all.begin(),all.end()));
}
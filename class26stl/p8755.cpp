#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

int main(){;
  int n;
  cin >> n;
  int m;
  cin >> m;
  vector <map <long long,long long>> all(n);
  map <int,long long> suan;
  for(int i =1;i<=n;i++){
    long long x;
    cin >> x;
    suan.emplace(i,x);
  }
  long long time;
  while(m--){
    long long i,t,s;
    cin >> time;
    cin >>i>>t>>s;
    while(!all[i-1].empty()&&(*(all[i-1].begin())).first<=time){
      suan[i]+=(*(all[i-1].begin())).second;
      all[i-1].erase(all[i-1].begin());
    }
    if(s<=suan[i]){
      all[i-1][time+t]+=s;
      suan[i]-=s;
      cout << suan[i]<<endl;
    }else{
      cout << -1<<endl;
    }
  }


}
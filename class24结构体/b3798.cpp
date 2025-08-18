#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <math.h>
using namespace std;

double bzc(int m){
  vector <int> mall(m);
  for (auto &i :mall){
    cin >> i;
  }
  double su = accumulate(mall.begin(),mall.end(),0.0);
  su = su/m;
  double all = 0;
  for (auto&i:mall){
    all+=pow(i-su,2);
  }
  all = all/m;
  return all;
}

int main(){
  int n,m;
  cin >> n>>m;
  struct pip {
    string name;
    double sum;
  };

  vector <pip> x(n);

  for(auto &[n,s]:x){
    cin >> n;
    s = bzc(m);
  }
  
  sort(x.begin(),x.end(),[](pip a1,pip a2){
      if (a1.sum==a2.sum){
        return a1.name<a2.name;
      }
      return a1.sum > a2.sum;
      });
  if(n<=20){
    for (auto &[n,_]:x){
      cout << n << endl;
    }
  }else{
    for (int i=0;i<20;i++){
      cout << x[i].name<<endl;
    }
  }
}

#include <bits/stdc++.h>
using namespace std;



int main(){
    unsigned long long F=0,B=0;    
    multiset <unsigned long long> all;

    int n;
    cin >> n;
    while(n--){
        unsigned long long x;
        cin >> x;
        all.insert(x);
    }
    auto select = [&](unsigned long long &a){
      auto i = all.upper_bound(a);
      if (i!=all.begin())i--;
      a+=*i;
      all.erase(i);
    };

    while (!all.empty()){
        select(F);
        if (all.empty())break;
        select(B);
    }
    cout << F << ' ' << B;
}
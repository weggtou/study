#include <bits/stdc++.h>
using namespace std;

#ifndef DEBUG
struct __X {
  __X& operator<<(const auto& str) {return *this;}
  void sp(const string& str = "") {}
} dout;
#define debug(x)
#endif

int main(){
  int T;
  scanf("%d",&T);
  using add  = pair<int,int>;
  while (T--){
    dout.sp();
    int k,m;
    scanf("%d",&k);
    scanf("%d",&m);
    int a_1;
    scanf("%d",&a_1);
    int b;
    scanf("%d",&b);
    if(a_1+m<b){
      cout << "Yoshino"<<endl;
      continue;
    }
    debug(k);
    debug(m);
    priority_queue <add> all;

    for(int i = 3;i<=pow(2,k-1)+1;i++){
      int a,c;
      scanf("%d",&a);
      scanf("%d",&c);
      all.emplace(max(a,c),0);
      all.emplace(min(a,c)+m,1);
      debug(all);
    }
    
    int x;
    if(all.top().second == 1){
      x = all.top().first-m;
    }else{
      x = all.top().first;
    }
    if(a_1+m>=x){
      cout << "Kotori"<<endl;
    }else{
      cout << "Yoshino"<<endl;
    }
  }
}
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
    int k,m;
    scanf("%d%d",&k,&m);
    queue <add> all1;
    multiset <add> all2;
    int g,x1=0,xn;
    scanf("%d",&g);
    for(int i=2;i<=pow(2,k);i++){
      int x;
      scanf("%d",&x);
      if(x>g+m){
        all1.emplace(x,i);
      }else{
        all2.emplace(x+m,i);
      }
    }
    while(!all1.empty()){
      add i = all1.front();
      bool can2 = 0;
      for(auto &g:all2){
        if(g.first>=i.first){
          int x = 32 - __builtin_clz(max(g.second,i.second));
          int w = 1<<x;
          if((w)/2<i.second&&(w)/2<g.second){
            all1.pop();
            break;
          }
        }
      }
    }
    if(all1.empty()){
      printf("Kotori\n");
    }else{
      printf("Yoshino\n");
    }
  }
}
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
  using add  = tuple<int,int,int>;
  while (T--){
    int k,m;
    scanf("%d%d",&k,&m);
    queue <add> all1;
    multiset <add> all2;
    int g,x1=0,xn;
    scanf("%d",&g);
    for(int n=1;n<=k;n++){
      for(int i = pow(2,n-1)+1;i<=pow(2,n);i++){
        int x;
        scanf("%d",&x);
        if(x>g+m){
          all1.emplace(x,i,pow(2,n));
        }else{
          all2.emplace(x+m,i,pow(2,n));
        }
      }
    }
    while(!all1.empty()){
      add i = all1.front();
      bool can2 = 0;
      for(auto &w:all2){
        if(get<0>(w)>=get<0>(i)&&((get<2>(max(w,i)))/2<get<1>(i)&&(get<2>(max(w,i)))/2/2<get<1>(w))){
            all1.pop();
            break;
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
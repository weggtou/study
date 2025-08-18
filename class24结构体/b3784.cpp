#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  long long n,m,a,b;
  cin >> n>>m>> a >> b;
  struct song{
    long long her;
    long long love=0;
    int i;
  };

  vector <song> s(n);
  for (int i =1;i<=a;i++){
    int index = 1;
    for (auto &[h,l,in]:s){
      if(i==1){
        in = index;
        index++;
      }
      long long x;
      scanf("%d",&x);
      if(i!=b){
        l+=x;
      }else{
        h = x;
        l+=x;
      }
      
    }
  }

  sort(s.begin(),s.end(),[](song a1,song a2){
      return a1.her >a2.her;
      });
  int her = s[0].i;
  sort(s.begin(),s.end(),[](song a1,song a2){
      return a1.love >a2.love;
      });

  bool in = false;
  for (int i = 0;i<m;i++){
    if (her == s[i].i){
      s.erase(s.begin()+i);
      in=true;
    }
  }
  if (in){
    cout << her << ' ';
    for (int i = 0;i<m-1;i++){
      cout << s[i].i<<' ';
    }
  }else{
    for (int i = 0;i<m-1;i++){
      cout << s[i].i<<' ';
    }
    cout << her;
  }
}

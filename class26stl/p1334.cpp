#include <iostream>
#include <queue>
using namespace std;

int main(){
  int n;
  cin >> n;
  using u64 = unsigned long long;
  priority_queue<u64,vector<u64>,greater<u64>> q;
  while(n--){
    int x;
    cin >> x;
    q.push(x);
  }
  u64 ans =0;
  while(q.size() > 1){
    u64 top1 = q.top();
    q.pop();
    u64 top2 = q.top();
    q.pop();
    ans += top1+top2;
    q.push(top1+top2);
  }

  cout << ans << endl;

}//反着想，每两个木板的拼接都对应一次锯开，所以每次挑最小的两个合并，相当于是
//锯开时用了最少的能量，所以一直找最小的两个组合然后加到消耗的总能量里，就可以了
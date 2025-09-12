#include <bits/stdc++.h>
using namespace std;

int main(){
  int N;
  cin >> N;
  multiset <long long> all;
  stack <long long> order;

  int oper;
  while(N--){
    cin >> oper;
    if(oper==0){
      long long last;
      cin >> last;
      all.insert(last);
      order.push(last);
    }else if(oper==1){
      all.erase(all.find(order.top()));
      order.pop();
    }else{
      if(all.empty()){
        cout << 0 << endl;
      }else{
        cout << *(--all.end())<<endl;
      } 
    }
  }  
}
#include <iostream>
#include <queue>
using namespace std;

int main(){
  priority_queue <long long,vector<long long>,decltype([](long long a,long long b){
      return a>b;
      })> all;
  
  int n;
  cin >> n;

  while(n--){
    int op;
    cin >> op;
    if(op==1){
      long long x;
      cin >> x;
      all.push(x);
    }else if(op==2){
      cout << all.top() << endl;
    }else{
      all.pop();
    }
  }
}

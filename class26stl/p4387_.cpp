#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
  int N;
  cin >> N;
  while(N--){
    int n;
    cin >> n;
    vector <int> pushed(n),poped(n);
    for(auto &i:pushed)cin>>i;
    for(auto &i:poped)cin>>i;
    stack <int> sta;
    int index =0;
    for(auto &x:pushed){
      sta.push(x);
      while(!sta.empty()&&poped[index]==sta.top()){
        sta.pop();
        index++;
      }
    }
    cout << (sta.empty()?"Yes":"No") << endl;    
  }
}
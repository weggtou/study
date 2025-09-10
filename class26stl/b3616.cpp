#include <iostream>
#include <queue>
using namespace std;

int main(){
  queue <int> a;
  int n ;
  cin >> n;
  while (n--){
    int x;
    cin >> x;
    if (x==1){
      int b;
      cin >> b;
      a.push(b);
    }

    if (x==2){
      if (a.empty()){
        cout << "ERR_CANNOT_POP" << endl;
      }else{
        a.pop();
      }
      
    }
    if(x==3){
      if (a.empty()){
        cout << "ERR_CANNOT_QUERY" << endl;
      }else{
        cout << a.front() << endl;
      }
      
    }
    if(x==4){
      cout << a.size() << endl;
    }
  }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  while (n--){
    int n2;
    cin >> n2;
    stack <unsigned long long> a;
    int count = 0;
    while(n2--){
      string x;
      cin >> x;

      if (x=="push"){
        unsigned long long w;
        cin >> w;
        a.push(w);
        count ++;
      }

      if (x=="query"){
        if (a.empty()){
          cout << "Anguei!" << endl;
        }else{
          cout << a.top() << endl;
        }
      }

      if(x=="pop"){
        if(a.empty()){
          cout << "Empty" <<endl;
        }else{
          a.pop();
          count--;
        }
      }

      if(x=="size"){
        if (count >=0){
        cout << count << endl;
        }else{
          cout << 0 <<endl;
        }
      }
    }

  }
}

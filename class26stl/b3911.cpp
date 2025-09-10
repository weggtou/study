#include <bits/stdc++.h>
using namespace std;

int main (){

  int N,k;
  cin >> N;
  cin >> k;
  unordered_map <string,string> a;
  while(N--){
    string x;
    cin >> x;
    string X;
    cin >> X;
    a.insert(make_pair(x,X));
    
  }
  string rabish;
  getline (cin,rabish);
  while(k--){
    string A;
    getline(cin,A);
    while(A.find('{')!=-1){
      string change = A.substr(A.find('{')+1,A.find('}')-A.find('{')-1);
      
      A.replace(A.find('{'),A.find('}')-A.find('{')+1,a[change]);

    }
    cout << A << endl;
  }
}

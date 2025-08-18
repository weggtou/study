#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector <int> grade(n);
  int cont = n;
  for(int i =0;i<n;i++){
    int in;
    cin >> in;
    grade[in]=cont;
    cont--;
  }

  struct el{
    int pai;
    int index;
    int all;
  };
  
  vector <el>x(n);
  int ind = 1;
  for (auto &[pai,i,_]:x){
    cin >> pai;
    i=ind;
    ind++;
  }
  
  sort(x.begin(),x.end(),[](el a1,el a2){
    return a1.pai<a2.pai;
  });
  int gra=1;
  for (auto &[al,i,a]:x){
    a=grade[i]+=gra;
    gra++;
  }
  sort(x.begin(),x.end(),[](el a1,el a2){
    if (a1.all==a2.all){
      return a1.pai>a2.pai;
    }
    return a1.all>a2.all;
  });
    
  for(int i =1;i<=n;i++){
    cout << i<<". ";
    cout << "Kod";
    if(i<10){
      cout << "0";
    }
    cout << x[i-1].index<<" ("<<x[i-1].all<<")"<<endl;
  }

}

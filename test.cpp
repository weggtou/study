#include <bits/stdc++.h>
using namespace std;
int  test(const int &b){
  
  return b;
}
int main(){
  // class test{
  //   int &a;
  //   int b;
  //   int c;
  //  public:
  //   test (int a,int b):a(a),b(b){}
  //   void operator() ()const{
  //     a= 1;
  //   }
  //   int re(){
  //     return a;
  //   }
  // };
  // int a;
  // cin >> a;
  // test x(a,2);
  // x();
  // cout << x.re();
  class test{
    int &a;
    int b;
   public:
    test(int a,int b):a(a),b(b){}

    void change () const {
      a = 10;
    }
    int re(){
      return a;
    }
  };
  test a(10,11);
  

}
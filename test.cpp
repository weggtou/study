#include <bits/stdc++.h>
using namespace std;    
class bit{
  using u64 = unsigned long long;
  u64 v = 0;
 public:
  bit (u64 a):v(a){}
  bit (const string& str){
    v = 0;
    for (auto i:str){v = (v<<1)|(i-'0');}
  }
  bit(const initializer_list<int>& indexes) {
    for(auto &i:indexes){
      v<<=1;
      v|=i;
    }
  }
  
  bit& operator +=(u64 a){v+=a;return *this;}
  bit& operator -=(u64 a){v-=a;return *this;}
  bit& operator *=(u64 a){v*=a;return *this;}
  bit& operator /=(u64 a){v/=a;return *this;}
  bit& operator|=(u64 x) { return v |= x, *this; }
  bit& operator^=(u64 x) { return v ^= x, *this; }
  bit& operator<<=(u64 x) { return v <<= x, *this; }
  bit& operator>>=(u64 x) { return v >>= x, *this; }
  bit& operator++() { return ++v, *this; }
  bit operator++(int) { return bit(v++); }
  bit& operator--() { return --v, *this; }
  bit operator--(int) { return bit(v--); }
  friend istream& operator>> (istream& in,bit& x){return in >> x.v;}
  friend ostream& operator<< (ostream& out,bit& x){return out << x.v;}
};

int main(){
  bit a = 100;
  cout << a<<endl;
  string b = "1010";
  bit c={1,0,1};
  cout << c;
  cout <<a;
}
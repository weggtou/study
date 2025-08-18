#include <iostream>
#include <string.h>
using namespace std;
class bint{
  int* digits = nullptr;
  int size = 0;
 public:
  bint& operator=(const bint& x) {
    if (this == &x) return *this;
    delete[] digits;
    size = x.size;
    digits = new int[size];
    memcpy(digits, x.digits, sizeof(int) * size);
    return *this;
  }

  bint operator*(bint& x){
    bint t;
    t.size = x.size+size;
    t.digits = new int[t.size];
    memset(t.digits,0,sizeof(int)*t.size);
    for (int i = 0;i<size;i++){
      for(int g = 0;g<x.size;g++){
        t.digits[i+g+1]+=(x.digits[g]*digits[i])/10;
        t.digits[i+g]+=(x.digits[g]*digits[i])%10;
      }
    }
    if (t.digits[t.size-1]==0&&t.size!=1){
      t.size--;
    }
    return t;
  }

  bint operator /(int& x){
    long long now=0;
    bint t;
    t.size = size;
    t.digits = new int[t.size];
    memset (t.digits,0,sizeof(int)*t.size);

    for (int i= size-1;i>=0;i--){
      now = now*10+digits[i];
      t.digits[i]=now/x;
      now = now%10;
      
    }
    if (t.size>1&&t.digits[t.size-1]==0){t.size--;};
    
    return t;
    
  }

  void operator=(string &x){
    digits = new int[x.size()];
    size = x.size();
    for (int i = x.size()-1;i>=0;i--){
      digits[x.size()-1-i] = x[i]-'0';
    }
    return;
  }

  bint operator+(bint &x){
    bint t;
    t.size = max(size,x.size)+1;
    t.digits = new int[t.size];
    memset(t.digits,0,sizeof(int)*t.size);

    for (int i = 0;i<t.size-1;i++){
      if (i<size){
        t.digits[i]+=digits[i];
      }
      
      if(i<x.size){
        t.digits[i]+=x.digits[i];
      }
      
      if(t.digits[i]>=10){
        t.digits[i]-=10;
        t.digits[i+1]+=1;
      }
    }
    if (t.size>1&&t.digits[t.size-1]==0){t.size--;};
    return t;
  }

  bool operator < (bint &x){
    if (size>x.size)return false;
    if (size < x.size)return true;
    if (size == x.size){
      for(int i = size-1;i>=0;i--){
        if(x.digits[i]!=digits[i]){
          return digits[i]<x.digits[i];
        }
      }
      return false;
    }
  }
  
  bint operator-(bint&x){
    bint t;
    t = *this;
    for (int i = 0;i<=size-1;i++){
      if(i<t.size&&i<x.size){
        if(t.digits[i]<x.digits[i]){
          t.digits[i]=t.digits[i]+10-x.digits[i];
          t.digits[i+1]-=1;
        }else{
          t.digits[i]=t.digits[i]-x.digits[i];
        }
      }
    }
    if (t.size>1&&t.digits[t.size-1]==0){t.size--;};
    return t;
  }

  friend istream& operator >> (istream &lhs,bint &rhs){
    string x;
    lhs >> x;
    rhs = x;
    return lhs;
  }

  friend ostream& operator << (ostream &lhs,const bint &rhs){
    for (int i = rhs.size-1;i>=0;i--){
      lhs << rhs.digits[i];
    }
    return lhs;
  }
  ~bint() {
    delete[] digits;
    digits = nullptr;
  }

};

int main (){
  bint a;
  int b;
  cin >> a >> b;
  cout <<a/b;
}

#include <iostream>
using namespace std;

int main (){
    int a,b,c,d,e;
    int t = 0;
    cin >> a >>b >>c >>d >>e;
    int l[5] = {a,b,c,d,e};
    for (int i=0;i < 5;i++){
        int &x = l[i];
        t += x%3;
        x = x/3;
        if (i==0){
            l[1] += x;
            l[4] += x;
            
        }else if(i==4){
            l[0] += x;
            l[3] += x;
            
        }else{
            l[i-1] += x;
            l[i+1] += x;
            
        }
        
        

    }
    for (auto a : l){
        cout << a << ' ';
        
    }
    cout << endl;
    cout << t;
}
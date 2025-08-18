#include <iostream>
#include <vector>
using namespace std;

int main (){
    vector <int> e;
    int x,R,n;
    cin >> x >> R;
    do{
        n = x%R;
        x = x/R;
        e.push_back(n);
        
    }while(x/R!=0);
    e.push_back(x);
    for (int i = e.size()-1;i>=0;i--){
        if (e[i] > 10){
            cout << char(e[i]-10+65);
        }else cout << e[i];
    }
}
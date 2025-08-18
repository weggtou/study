#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char x[101] = {};
    cin >> x;
    bool same = true;
    for(int i = 0 ;i<strlen(x);i++){
        if (x[i] != x[strlen(x)-1-i]){
            same = false;
        }
    }
    if(same){
        cout << "yes";
    }else cout << "no";
}
#include <iostream>
#include <string.h>
using namespace std;

int main (){
    char x[101],x1[101] = {};
    cin >> x;
    for (int i=0;i < strlen(x);i++){
        if (i==strlen(x)-1){
            x1[i]=char(x[i]+x[0]);
            continue;
        }
        x1[i] = char(x[i]+x[i+1]);
    }
    x1[strlen(x)] = '\0';
    cout << x1;
}
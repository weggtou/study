#include <iostream>
#include <string.h>
using namespace std;

int main (){
    char a[31]={},b[31]={};
    cin >> a >> b;

    if (strstr(a,b)){
        cout << b << " is substring of " << a;
    }else if (strstr(b,a)){
        cout << a << " is substring of " << b;
    }else {
        cout << "No substring";
    }

}
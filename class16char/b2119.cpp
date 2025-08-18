#include<iostream>
#include<string.h>
using namespace std;

int main (){
    char a[33]={},b[3]={};
    cin >> a;
    for (int i = 0;i<3;i++){
        b[i] = a[strlen(a)-2+i];
    }
    b[2] = 0;
    if (strstr(b,"er")||strstr(b,"ly")){
        a[strlen(a) - 2] = 0;
        
    }else if(strstr(b,"ng")){
        if (a[strlen(a)-3] == 'i'){
            a[strlen(a)-3] = 0;
        }
    }
    cout << a;
}
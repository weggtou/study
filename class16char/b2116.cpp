#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main (){
    char x[51],x1[51] = {};
    cin >> x;

    for(int i =0;i<strlen(x);i++){
        switch (x[i])
        {
        case 'x':
            x[i] = 'A';
            break;
        case 'X':
            x[i] = 'a';
            break;
        case 'y':
            x[i] = 'B';
            break;
        case 'Y':
            x[i] = 'b';
            break;
        case 'z':
            x[i] = 'C';
            break;
        case 'Z':
            x[i] = 'c';
            break;
        default:
            x[i] = isupper(x[i])? tolower(char(x[i]+3)) :toupper(char(x[i]+3));
            break;
        }
    }
    for (int i =0;i<strlen(x);i++){
        x1[strlen(x)-1-i] = x[i];
    }
    x1[strlen(x)] = '\0';
    cout << x1;
}
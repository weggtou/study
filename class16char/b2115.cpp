#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

int main (){
    char x[10001],x1[10001];
    cin.getline(x,10001);

    for (int i = 0;i<strlen(x);i++){
        if (isalpha(x[i])){
            if (x[i] == 'a'){
                x1[i] = 'z';
            }else if(x[i] == 'A'){
                x1[i] = 'z';
            }else{
                x1[i] = char(x[i]-1);
            }

        } else {
            x1[i] = x[i];
        }
    }
    x1[strlen(x)] = '\0';
    cout << x1;


}
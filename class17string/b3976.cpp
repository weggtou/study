#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main (){
    string a,b;
    cin >> a;
    for(auto g:a){
        if(isalpha(g)){
            b.push_back(g);
        }
    }
    cout << b;
}
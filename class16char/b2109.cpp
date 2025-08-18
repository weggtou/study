#include <iostream>
using namespace std;
#include <ctype.h>

int main (){
    char x[256]={};
    cin.getline(x,256);
    int num = 0;
    for(auto g:x){
        cout << g<<endl;
        if (isdigit(g)){
            num++;
        }
    }

    cout << num;

}
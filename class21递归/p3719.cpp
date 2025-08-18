#include<iostream>
#include <string>
using namespace std;

int code(string &a,int &index){
    int cont=0;
    for(;index<=a.length()-1;index++){        
        if (a[index]=='a')cont++;
        else if(a[index]=='('){
            cont+=code(a,++index);
        }else if(a[index]==')'){
            return cont;
        }else if(a[index]=='|'){
            return max(cont,code(a,++index));
        }
    }
    return cont;
    
}
int main(){
    string a;
    cin >> a;
    int index=0;
    cout << code(a,index);
}
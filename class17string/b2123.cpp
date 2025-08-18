#include <iostream>
#include <string>
#include <format>
using namespace std;

int main (){
    string a;
    cin >> a;
    string same;
    int num =1;
    for(int i = 1;i<a.size();i++){
        if ( a[i] == a[i-1]){
            num ++;
        }else{
            same+= to_string(num)+a[i-1];
            num = 1;
        }
    }
    same+= to_string(num) + a[a.size()-1];
    cout << same;
}
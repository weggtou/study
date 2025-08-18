#include <iostream>
#include <string>
using namespace std;

int main(){
    string a = {};
    cin >> a;
    int n = 0;
    int f = a.find("luogu");
    while (f != -1){
        int i = f;
        n++;
        f = a.find("luogu",i+5);

    }
    cout << n;
}
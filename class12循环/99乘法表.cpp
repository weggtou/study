#include <iostream>
#include <format>
using namespace std;

int main (){
    for (int a = 1;a<=9;a++){
        for (int b = 1;b<=a;b++){
            
            cout << format ("{}*{}={:<2}",a,b,a*b);
        }
        cout << endl;
    }
}
#include <iostream>
#include <format>
using namespace std;

int main (){
    int n;

    cin >> n ;
    auto elar = ((!(n%3))&&(!(n%5))); 
    cout << (elar?"YES":"NO") << endl;

}
#include <iostream>
#include <format>
using namespace std;

int main (){
    int a,b,c;
    cin >> a >> b >> c ;
    cout << format ("{:>8} {:>8} {:>8}",a,b,c);


}
#include <iostream>
#include <format>
using namespace std;

int main (){
    int a;
    

    cin >> a;
    int b = a/100;
    int c = (a-b*100)/10;
    int d = a-b*100-c*10;
    cout << format ("{:d}{:d}{:d}",d,c,b); 
}
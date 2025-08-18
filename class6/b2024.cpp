#include <iostream>
#include <format>
using namespace std;
int main (){
    double a ;
    cin >>a;
    cout << format ("{:f}",a) << endl;
    cout << format ("{:.5f}",a) << endl;
    cout << format ("{:e}",a) << endl;
    cout << format ("{:g}",a) << endl;

}
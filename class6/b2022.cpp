#include <iostream>
#include <format>
using namespace std;

int main (){
    double a;
    cin >> a;
    cout << format ("{:.12f}",a) << endl;

}
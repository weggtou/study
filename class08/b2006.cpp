#include <iostream>
#include <format>
using namespace std;

int main(){
    double a,b,c,d ;
    cin >> a >> b >> c >> d;
    double p = (a*b-c*d)/(b-d);
    cout << format ("{:.2f}",p) << endl;
    

}
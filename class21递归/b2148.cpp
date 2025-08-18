#include <iostream>
using namespace std;
double f(double x,int n){
    if (n==1) return x/(1+x);
    return x/(n+f(x,n-1));
}

int main(){
    double x,n;
    cin >> x >> n;
    cout << fixed;
    cout.precision(2);
    cout << f(x,n);
}
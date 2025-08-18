#include <iostream>
#include <math.h>
#include <format>
using namespace std;

int main (){
    double a , bj , m , end;
    char b ;
    cin >> a >> b;
    m = a - 1000;
    auto y = (a > 1000);
    bj = (!y ? 8 : 8 + ceil(m/500)*4) ;//浮点数不能求余
    end = ((b == 'y')? (bj+5) : bj);
    cout << end << endl;

}
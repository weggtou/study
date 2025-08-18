#include <iostream>
#include <format>
#include <math.h>
using namespace std;

int main (){
    double p,x,y,n;
    double t = 0;
    cin >> n ;
    for (double i = n;i>0;i--){
        cin >> x >> y >> p;
        t += hypot(x,y)*2/50+p*1.5;//hypot计算两点间距离
    }
    cout << int(ceil(t)) <<endl;
}
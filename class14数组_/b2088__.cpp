#include <iostream>
using namespace std;

int main(){
    double l[10] = {28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
    int a,b,c,d,e,f,g,h,i,j;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    int l2 [10] = {a,b,c,d,e,f,g,h,i,j};
    double all = 0;
    for (int i = 0;i<10 ;i++){
        all += l[i]*l2[i];
    }
    cout << fixed;
    cout.precision(1);
    cout << all;
}
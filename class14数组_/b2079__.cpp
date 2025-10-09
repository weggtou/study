#include <iostream>
using namespace std;

int main(){
    int n;
    double s=1,x=1;
    cin >> n;
    for (double i=1;i<n+1;i++){//注意i
        x *= 1/i;
        
        s+=x;

    }
    cout << fixed;
    cout.precision(10);
    cout << s;
    
}
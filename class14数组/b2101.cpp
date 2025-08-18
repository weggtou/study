#include <iostream>
using namespace std;

int main (){
    int m,n,x,s=0;
    cin >>m >> n;
    int l[m][n];
    for (int i =0;i<m;i++){
        for (int g =0;g<n;g++){
            cin >> x ;
            l[i][g] =x;
            if (i==0 || g ==0 || i== m-1 || g == n-1){
                s += x;
            }
        }
    }
    cout << s;
    
}
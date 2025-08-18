#include <iostream>
#include <math.h>
using namespace std;

int main (){
    int n,m;
    cin >> n >> m;
    int l[n][m],l2[n][m];
    
    for (auto &i :l){
        for (auto &g :i){
            cin >> g;
        }
    }
    for (int i = 0;i<n;i++){
        for (int g = 0;g<m;g++){
            if (i*g==0 || i==n-1 || g==m-1){
                l2[i][g] = l[i][g];
            } else {
                l2[i][g]=(int)round((l[i][g]+l[i-1][g]+l[i][g-1]+l[i+1][g]+l[i][g+1])/5.0);//直接除以5会变为整数，需要加一个浮点数
            }
            

        }
    }
    for (auto &i :l2){
        for (auto &g :i){
            cout << g << " ";
        }
        cout << endl;
    }
}
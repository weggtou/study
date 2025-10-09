#include <iostream>
using namespace std;

int main (){
    int n,m,k,s;
    cin >> n >> m >> k;
    int a[n][m],b[m][k],h[n][k];
    for (auto &i: a){
        for (auto &g : i){
            cin >> g;
        }
    }
    for (auto &i: b){
        for (auto &g : i){
            cin >> g;
        }
    }
    
    for (int i =0;i<n;i++){
        for (int g =0;g<k;g++){
            s = 0;
            for (int o=0;o<m;o++){
                s+=a[i][o]*b[o][g];
            }
            h[i][g] = s;
            cout << s << " ";
        }
        cout << endl;
    }

}
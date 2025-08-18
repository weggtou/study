#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n,f,p;
    cin >> n >> f >> p;
    
    vector <vector<int>> fp1 (2,vector<int>(n));
    vector <vector<int>> fp2 (2,vector<int>(n));
    for (auto &i : fp1){
        for (auto &g : i){
            cin >> g;
        }
    }
    for (auto &i : fp2){
        for (auto &g : i){
            cin >> g;
        }
    }
    int i,a,m,c = n;
    for (int k = n;k>0;k--){
        a = -1;
        m = p;
        cin >> i;
        for (int g = 0 ;g<n;g++){
            if (fp2[0][g] == fp1[0][i-1] && fp2[1][g] > fp1[1][i-1] && fp2[1][g] <= m){
                a = g;
                m = fp2[1][g];
            }

        }
        if (a != -1){
            
            fp2[0][a] = 0;
            c --;
        }
        
    }
    
    cout << c;
}
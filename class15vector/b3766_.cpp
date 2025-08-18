#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n,m;
    cin >> n >> m;
    vector <long long> a(n);
    vector <long long> a2;
    int a1 [m];
    for (auto &g : a) cin >> g;
    for (auto &i: a1) cin >> i;
    
    for (int g : a1){
        for (int h =1;h<=g;h++){
            
            for (int k = h;k <= n; k+=g){
                
                a2.push_back(a[k-1]);
                
            }
        }
        a = a2;
        a2.clear();
    }


    for (auto i : a) cout << i << " ";
}


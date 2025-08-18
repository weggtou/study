#include <vector>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;
int main(){
    int n ,t,k;
    cin >> n>>k>>t;
    struct mimaji
    {
        int x;
        int y;
        int pop;
    };
    
    vector <mimaji> a(n);
    for(auto&[x,y,pop]:a){
        cin >> x>>y;
        pop =0;
    }
    while (k--){
        int a1,b1;
        cin >> a1>>b1;
        for (auto &[x,y,p]:a){
            if (a1==x&&b1==y){
                p=1;
            }
        }
    }
    int cont=0;
    
    int pip = 0;
    while(t--){
        int a1,b1;
        cin >> a1 >>b1;
        int max = 0;
        for (auto &[x,y,p]:a){
            if ((pow(a1-x,2)+pow(b1-y,2))>max){
                max = pow(a1-x,2)+pow(b1-y,2);
                pip = p;
            }
        }
        if (pip==1){
            cont ++;
        }
    }
    cout << cont;
}

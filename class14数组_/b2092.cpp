#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int l[n+1] ={};
    for (int i=1;i<=n;i++){
        if (i%2==0){
            l[i] = 1;
        }
    }
    for (int i=3;i<=n;i++){
        for (int g= 1;g<=n;g++){
            if(g%i==0){
                if (l[g] ==0){
                    l[g] =1;
                }else l[g] =0;
            }
        }
    }
    for (int i=1;i<=n;i++){
        if (l[i] ==0){
            cout << i << ' ';
        }
    }
}
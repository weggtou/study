#include <iostream>
using namespace std;

int main (){
    int n;
    float x;
    
    cin >> n;
    float l[n];
    for (int i=0;i<n;i++){
        cin >> x;
        l[i]=x;
        
    }
    for (int i=n-1;i>=0;i--){
        cout << l[i] << ' ';
    }
}
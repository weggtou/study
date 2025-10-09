#include <iostream>
using namespace std;

int main(){
    int s,x;
    cin >> s;
    int l[30] = {1,1};
    for (int i = 2;i<30;i++){
        l[i] =l[i-1] + l[i-2];
    }
    for (int i =s;i>0;i--){
        cin>>x;
        cout << l[x-1] << endl;
    }
    
}
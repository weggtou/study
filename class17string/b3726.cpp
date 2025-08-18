#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main (){
    int n,q;
    cin >> n >> q;
    vector <string> a = {};
    
    for (int i = 0 ;i<n;i++){
        string t  = {};
        cin >> t;
        a.push_back(t);
    }
    while(q--){
        vector <int> oper = {};
        int g = 0;
        cin >> g;
        if (g==1){
            for(int k=0;k<3;k++){
                cin >> g;
                oper.push_back(g);
            }
            a[oper[1]-1].insert(oper[2],a[oper[0]-1]);
        }else{
            cin >>g;
            cout << a[g-1] << endl;
        }
    }
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main (){
    int n,k;
    cin >> n >> k;
    vector <vector<string>> a(n,vector<string>(2));
    for (auto &i:a){
        for (auto &g:i){
            cin >> g;
        }
    }
    string str;
    getline(cin,str);
    while(k--){
        string c;

        getline(cin,c);
        int f1 = c.find('{');
        while (f1!= -1){
            int f2 = c.find('}');
            string x = c.substr(f1+1,f2-f1-1);
            for(auto i :a){
                if (x == i[0]){
                    c.replace(f1,f2-f1+1,i[1]);
                    break;
                }
            }
            f1 = c.find('{',f1+1);
        }
        cout << c << endl;

    }

}
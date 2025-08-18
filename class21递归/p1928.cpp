#include <iostream>
#include <ctype.h>
#include <string>

using namespace std;

string code(string &a,int &i){
    string n;
    for(;i<a.size();i++){
        if (isalpha(a[i])){
            n+=a[i];
        }else if(a[i]=='['){
            n+=code(a,++i);
        }else if(isdigit(a[i])){
            int t;
            if (isdigit (a[i+1])){
                int t =stoi(a.substr(i,2));
                string s,w=code(a,i+=2);
                while(t--){
                    s+= w;
                }
                return s;
            }else {
                int t =(a[i]-'0');
                string s,w=code(a,i+=1);
                while(t--){
                    s+= w;
                }
                return s;
            }

        }else if(a[i]==']'){
            return n;
        }
    }
    return n;
}
int main(){
    string a;
    cin >> a;
    int i =0;
    cout << code(a,i) << endl;

}
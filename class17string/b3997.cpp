#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string a = {};
    cin >> a;
    int s,h = 0;
    for (int n = 1;;n++){
        if(s+n<=a.size()){
            string b = a.substr(s,n);
            reverse(b.begin(),b.end());
            if(a.substr(s,n) == b){
                h++;
            }
            s +=n;
            if (s==a.size()){
                break;
            }
        }else{
            string b = a.substr(s);
            reverse(b.begin(),b.end());
            if(a.substr(s) == b){
                h++;
            }
            break;
        }   
        
    }
    cout << h;

}
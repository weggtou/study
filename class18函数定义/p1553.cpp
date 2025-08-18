#include <iostream>
#include <string>
using namespace std;
string zero(string &a){
    int b=a.size();
    for(int i =0;i<b-1;i++){
        if (a[0] !='0'){
            return a;
        }else{
            a.erase(0,1);
        }
    }
    return a;
}

string zeroback(string &a){
    int b=a.size();
    for(int i = b-1;i>=0;i--){
        if(a[a.size()-1]!='0'){
            return a;
        }else{
            a.pop_back();
        }
    }
    return a;
}
int main(){
    string n;
    cin >>n;
    if (n.find('.')!=-1){
        int i=n.find('.');
        string br,ba;
        for(int g=i-1;g>=0;g--)br.push_back(n[g]);
        for(int k=n.size()-1;k>i;k--)ba.push_back(n[k]);
        if(br!="0"){zero(br);}
        if (ba!="0"){zero(ba);zeroback(ba);}
        cout << br<<'.'<<ba;
    }
    else if(n.find('/')!=-1){
        int i=n.find('/');
        string br,ba;
        for(int g=i-1;g>=0;g--)br.push_back(n[g]);
        for(int k=n.size()-1;k>i;k--)ba.push_back(n[k]);
        if(br!="0"){zero(br);}
        zero(ba);
        cout << br<<'/'<<ba;
    }
    else if(n.find('%')!=-1){
        int i=n.find('%');
        string br;
        for(int g=n.size()-2;g>=0;g--)br.push_back(n[g]);
        zero(br);
        cout << br<<'%';

    }
    else if(n=="0"){
        cout << n;
    }
    else{
        string br;
        for(int g = n.size()-1;g>=0;g--)br.push_back(n[g]);
        zero(br);
        cout << br;
    }
}
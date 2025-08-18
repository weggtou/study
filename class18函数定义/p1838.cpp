#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> fenkai(long long bu){
    vector <int> a;
    do{
        a.push_back(bu%10);
        bu/=10;
    }while(bu!=0);
    reverse(a.begin(),a.end());
    return a;
}
bool f1(string&a){
    bool f1=false;
    if(a.find('1')!=-1&&a.find('5')!=-1&&a.find('9')!=-1){
        f1 = true;
        return f1;
    }
    for (int i=1;i<=3;i++){
        if(a.find(char(i+'0'))!=-1&&a.find(char(i+'0'+3))!=-1&&a.find(char(i+'0'+6))!=-1){
            f1 = true;
            return f1;
        }
    }
    return f1;
}
bool f2(string&a){
    bool f2=false;
    if(a.find('3')!=-1&&a.find('5')!=-1&&a.find('7')!=-1){
        f2 = true;
        return f2;
    }
    string s ="147";
    for(char i:s){
        if(a.find(i)!=-1&&a.find(i+1)!=-1&&a.find(i+2)!=-1){
            f2 = true;
            return f2;
        }
    }
    return f2;
}
int main (){
    long long bu;
    cin >> bu;
    vector <int> a = fenkai(bu);
    string b,x;
    for (int i;i<a.size();i++){
        if (i%2==0){
            b.push_back(a[i]+'0');
        }
        if (i%2 ==1){
            x.push_back(a[i]+'0');
        }
    }
    if(f1(b)||f2(b)){
        cout << "xiaoa wins." << endl;
    }else if(f1(x)||f2(x)){
        cout << "uim wins."<<endl;
    }else cout<< "drew.";
}
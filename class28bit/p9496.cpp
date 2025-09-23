#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        if(x==y){
            cout<<"0"<<endl;
        }else if(((y-x)&x)==0||((x-y)&y)==0){
            cout<<"1"<<endl;
        }else{cout<<"2"<<endl;}
    }
}
#include <iostream>
#include <math.h>
#include <vector>
#include <string>
using namespace std;
void x(vector <vector<string>> &a,int l1,int l2,int l3,int l4){
    if(l1==l2) a[l3][l1]='X';
    else {
        int w = (l2-l1+1)/3;
        x(a,l1,l1+w-1,l3,l3+w-1);x(a,l1+w,l1+w+w-1,l3+w,l3+w+w-1);x(a,l2-(w-1),l2,l3,l3+w-1);
        x(a,l1,l1+w-1,l3+w+w,l3+w+w+w-1);x(a,l2-(w-1),l2,l3+w+w,l3+w+w+w-1);
    }
}
int main(){
    int n ;
    while(1){
        cin >>n;
        if (n==-1){
            break;
        }
        int l ;
        if (n==1){l=1;}
        else l=pow(3,n-1);
        vector<vector<string>> a (l,vector<string>(l,string(1,' ')));
        x(a,0,l-1,0,l-1);
        for(auto &i:a){
            for(auto &g:i){
                cout <<g;
            }
            cout << endl;
        }
        cout << '-'<<endl;
    }
}
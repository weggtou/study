#include <vector>
#include <iostream>
#include <math.h>
using namespace std;
void three(auto &a,int l1,int l2,int size){
    if (size==1){
        a[l1][l2] = '/';a[l1][l2+1] ='\\';a[l1+1][l2-1]='/';a[l1+1][l2+2]='\\';a[l1+1][l2]='_';a[l1+1][l2+1]='_';   
    }else{
        int n =size -1;
        three(a,l1,l2,n);
        three(a,l1+pow(2,n),l2-pow(2,n),n);
        three(a,l1+pow(2,n),l2+pow(2,n),n);
    }
}
int main(){
    int n;
    cin >>n;
    vector <string> a(pow(2,n),string(2*pow(2,n),' '));
    three(a,0,pow(2,n)-1,n);    
    for(auto &i:a){
        cout <<i<<endl;
    }
}
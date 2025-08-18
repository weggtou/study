#include <iostream>
#include <vector>
#include <string>
using namespace std;
void re(string a,int sta,int end){
    bool find1 = true,find2 = true;
    for(int i =sta;i<=end;i++){
        if(a[i]!='0')find1=false;
        if(a[i]!='1')find2=false;
    }
    if(find1){
        cout << 'A';
    }else if(find2){
        cout << 'B';
    }else {
        cout << 'C';
        int l=(end-sta+1)/2;
        re(a,sta,sta+l-1);re(a,sta+l,end);
    }
}
int main(){
    string n;
    cin >>n;
    re(n,0,n.size()-1);
}
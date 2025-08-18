#include <string>
#include <iostream>
using namespace std;
void difind(int a,string b){
    long long w=0,l=0;
    for (int i=0;i<b.size();i++){
        if (b[i]=='E'){
            cout <<w<<":"<<l<<endl;
            break;
        }
        if (b[i]=='W')w++;
        if(b[i]=='L')l++;
        if((w>=a||l>=a)&&(w-l>=2||w-l<=-2)){
            cout<<w<<':'<<l<<endl;
            w=0;l=0;
        }
    }
    
    cout <<endl;
}
int main(){
    string a,b;
    while(a.find('E')==-1){
        cin >> a;
        b+=a;
    }
    difind(11,b);
    difind(21,b);
}
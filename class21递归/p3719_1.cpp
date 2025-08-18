#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int code(string &n,int sta,int end){
    int cont = 0;
    for(int i=sta;i<=end;i++){
        if (n[i]=='('){cont++;}
        if (n[i]==')'){cont--;}
        if(cont ==0&&n[i]=='|'){
            return max(code(n,sta,i-1),code(n,i+1,end));
        }
    }
    
    if( int left = n.find('(',sta);left !=-1&&left<=end){
        int cont1=1;
        for (int i=left+1;i<=end;i++){
            if(n[i]=='('){cont1++;}
            if(n[i]==')'){
                cont1--;
                if(cont1==0){
                return code(n,sta,left-1)+code(n,left+1,i-1)+code(n,i+1,end);

            }
            }
            
        }
    }
    return end-sta+1;

}


int main(){
    string n;
    cin >>n;
    cout << code(n,0,n.size()-1) <<endl;
}
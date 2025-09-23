#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,t;
    scanf("%d",&n);
    scanf("%d",&t);
    int all=0;
    
    while(t--){
        int x;
        cin>>x;
        int test =(1<<(x-1));
        
        if((n&test)==0){
            int next= ((n>>x)<<x);
            next+=pow(2,x-1);
            all+=(next-n);
            n=next;
        }
    }
    cout<<all;
    
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,k;
    cin >> n >>k;
    struct ti
    {
        int i;
        int p;
    };
    
    vector <ti>x(n);
    
    int index = 1;
    for (auto &[i,p]:x){
        i=index;
        int sum=0;
        for(int g =1;g<=k;g++){
            int al;
            cin >> al;
            sum+=al;
        }
        p = sum;
        index++;
    }

    sort(x.begin(),x.end(),[](ti a1,ti a2){
        if(a1.p!=a2.p){
            return a1.p>a2.p;
        }else{
            return a1.i<a2.i;
        }
    });
    cout << x[0].i <<endl << x[1].i << endl;
}
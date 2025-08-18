#include <vector>
#include <iostream>
#include<math.h>
#include <vector>
using namespace std;
void zero(vector <vector<int>> &a,int b,int c,int d,int e){
    if(c-b==1)a[d][b] = 0;
    else {
        for (int i=0;i<(c-b+1)/2;i++){
            for(int g=0;g<(c-b+1)/2;g++){
                a[d+i][b+g]=0;
            }
        }
        zero(a,b+(c-b+1)/2,c,d,e);zero(a,b+(c-b+1)/2,c,d+(c-b+1)/2,e);zero(a,b,(c-b+1)/2-1+b,d+(c-b+1)/2,e);
    }
}
int main (){
    int n;
    cin >> n;
    vector <vector<int>> a(pow(2,n),vector<int>(pow(2,n),1));
    zero(a,0,pow(2,n)-1,0,pow(2,n)-1);
    for(auto &i:a){
        for (int &g:i){
            cout << g;
            cout <<' ';
        }
        cout << endl;
    }
}
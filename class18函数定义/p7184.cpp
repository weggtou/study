#include<string>
#include <vector>
#include<iostream>
using namespace std;
int code(char a,char b){
    if(a==b)return 1;
    string c;
    c+=a;c+=b;
    if(c.find('P')!=-1&&c.find('S')!=-1){
        if (c.find('S')==0){
            return 2;
        }else return 0;
    }
    if(c.find('R')!=-1&&c.find('S')!=-1){
        if (c.find('R')==0){
            return 2;
        }else return 0;
    }
    if(c.find('P')!=-1&&c.find('R')!=-1){
        if (c.find('P')==0){
            return 2;
        }else return 0;
    }
}

int grade(string &a,string &b){
    int grade=0;
    for (int i =0;i<a.size();i++){
        grade+=code(a[i],b[i]);
    }
    return grade;
}

int main(){
    int r,fn;
    cin >>r;
    string S,a;
    cin >>S;
    cin>>fn;
    vector <string>F;
    while(fn--){cin>>a;F.push_back(a);}
    int gr=0;
    for(auto &g:F){
        gr +=grade(S,g);
    }
    cout <<gr<<endl;
    
    string all ="SPR";
    int max=0;
    for (int k=0;k<r;k++){
        int m=0;
        for(auto &i:all){
            int sum =0;
            for (auto&g:F){
                sum +=code(i,g[k]);
                
            }
            if (sum>m) m=sum;
        }
        max+=m;
    }

    cout << max;
}
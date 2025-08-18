#include <iostream>
#include <vector>
#include <string>
using namespace std;
int issame(int i ,int g,char a,char b,char c){
    int isame = ((i+'A') == a) + ((i+'A') == b) +((i+'A') == c);
    int gsame = ((g+i+'A') == a) + ((g+i+'A') == b) +((g+i+'A') == c);
    if (isame == 3&&g==0){;
        return 1;
    }else if(isame + gsame == 3&&isame!=3&&gsame!=3){
        return 2;
    }else {
        return 0;
    }
}

int chack (int i,int g,vector <string> a){
    for (int k=0;k<3;k++){
        if(issame(i,g,a[k][0],a[k][1],a[k][2])==2){
            return 2;
        }else if(issame(i,g,a[k][0],a[k][1],a[k][2])==1){
            return 1;
        }
        if(issame(i,g,a[0][k],a[1][k],a[2][k])==2){
            return 2;
        }else if(issame(i,g,a[0][k],a[1][k],a[2][k])==1){
            return 1;
        }
    }
    if(issame(i,g,a[0][0],a[1][1],a[2][2])==2||issame(i,g,a[0][2],a[1][1],a[2][0])==2){
        return 2;
    }else if(issame(i,g,a[0][0],a[1][1],a[2][2])==1||issame(i,g,a[0][2],a[1][1],a[2][0])==1){
        return 1;
    }
    return 0;

}
int main (){
    vector <string> a(3);
    for (auto &i:a) cin >> i;
    int one =0,two=0;

    for (int i = 0;i<26;i++){
        for(int g=0;i+g<26;g++){
            if(chack(i,g,a)==2){
                two++;
            }else if(chack(i,g,a)==1){
                one ++;
            }
        }
    }
    cout << one<<endl;
    cout << two << endl;
}
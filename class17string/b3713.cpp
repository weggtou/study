#include<iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    string add,all,re,stu;
    char name[210]={} ,empty[2]= {' '},namecopy[210]={};
    while(b--){
        cin >> add;
        strcat(name,add.c_str());
        strcat(name,empty);
    }
    
    while(a--){
        cin >> stu;
        strcpy(namecopy,name);
        char* tock = strtok(namecopy,empty);
        while(tock){
            cout << tock << endl;
            cin >> re;
            all = stu+".zip/"+stu+"/"+tock+'/'+tock+".cpp";
            if (all == re){
                cout << "Fusu is happy!" << endl;
            }else{
                cout << "Fusu is angry!" << endl;
            }
            tock = strtok(NULL,empty);
        }
    }
    
}

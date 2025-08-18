#include <iostream>
#include <string.h>
using namespace std;

int main(){
    char a[20001]={},m1[101] = {},m2[101] = {},c[]={" ,."};
    cin.getline(a,20001);
    auto tock = strtok(a,c);
    int m = strlen(tock);
    int n = strlen(tock);
    strcpy(m1,tock);
    strcpy(m2,tock);
    while(tock){

        if (strlen(tock) > m){
            m = strlen(tock);
            strcpy(m1,tock);
        }

        if (strlen(tock) < n){
            n = strlen(tock);
            strcpy(m2,tock);
        }

        
        tock = strtok(NULL,c);
    }
    cout << m1<<endl;
    cout << m2 << endl;

}
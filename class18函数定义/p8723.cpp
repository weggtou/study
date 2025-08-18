#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
char change(int a){
    if (a<=9){
        return char(a+'0');
    }else{
        return char(a-9+'A'-1);
    }
}

int main (){
    int n;
    cin >> n;
    for (int i=1;i<n;i++){
        for (int g=1;g<=i;g++){
            vector <int> wei;
            int w = i*g;
            string a,b,c;
            a = change(i);
            b = change(g);
            do{
                wei.push_back(w%n);
                w /= n;
            }while (w!=0);
            reverse(wei.begin(),wei.end());
            for(int k:wei){
                c.push_back(change(k));
            }
            cout << a<<"*"<<b<<'='<<c << ' ';

        }
        cout << endl;
    }
}
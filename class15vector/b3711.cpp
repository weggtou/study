#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main (){
    int T;
    long long n;
    vector <int> x,x_change;
    cin >> T;

    while (T--){
        cin >> n;
        bool can = false;
        if(n%4 == 0){
            cout <<"Yes"<<endl;
            continue;
        }

        x.clear();
        do{
            x.push_back(n%10);
            n = n/10;
        }while(n!=0);

        // for(int g:meiwei)cout<<g;
                // cout << endl;
        
        x_change = x;

        for(int shanjiwei = 1;shanjiwei<x.size();shanjiwei++){
            for(int congnakaishi = 1;congnakaishi<=x.size()-shanjiwei+1;congnakaishi++){
                for(int dijige = 1;dijige <= shanjiwei;dijige++){
                    x_change[congnakaishi-1+dijige-1] = -1;
                }

                // for(int g:meiwei_change)cout<<g;
                // cout << endl;

                unsigned long long sum = 0;
                int weishu = 0;
                for (int wei:x_change){
                    if (wei != -1){
                        sum+=pow(10,weishu)*wei;
                        weishu ++;
                    }
                }

                if(sum%4 == 0){
                    can = true;
                    break;
                }

                meiwei_change = meiwei;
            }
            if(can) break;
        }
        if(can)cout<<"Yes"<<endl;
        if(!can)cout << "No" << endl;
        
        

    }
} 
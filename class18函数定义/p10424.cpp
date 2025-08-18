#include <iostream>
#include <vector>
using namespace std;

bool find(long long shu){
    vector <int> wei = {};
    do{
        wei.push_back(shu%10);
            shu = shu/10;
    }while(shu!=0);

    for (int g = 0;g<wei.size();g++){
            if(g%2==wei[g]%2){
                return false;
            }
        }
    return true;
}

int main (){
    long long n;
    cin >> n;
    long long good =0;

    for (auto i = 1;i<=n;i++){
        long long shu = i;
        bool f = find(shu);
        if (f){
            good ++;
        }
    }
    cout << good;
}
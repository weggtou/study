#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin >> n >> k;
    vector <int> a(n);
    for(auto &i:a){
        scanf("%d",&i);
    }
    nth_element(a.begin(),a.begin()+k,a.end());
    cout << a[k];
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main (){
    int n,m;
    cin >> n>>m;
    vector <tuple<string,string,long long>> s;
    vector <tuple<string,string,long long>> h;
    int all = m+n;
    while(all--){
        string a,b;
        long long c;
        cin >> a >> b>>c;
        if(b=="S"){
            s.emplace_back(a,b,c);
        }else{
            h.emplace_back(a,b,c);
        }
        
    }
    sort(s.begin(),s.end(),[](auto a1,auto a2){
        return get<2>(a1)>get<2>(a2);
    });
    sort(h.begin(),h.end(),[](auto a1,auto a2){
        return get<2>(a1)>get<2>(a2);
    });
    cout << get<0>(h[2]) << endl;
    for (int i = 5, g=1;g<=4;i++,g++){
        cout << get<0>(s[i]) << endl;
    }
    
}
#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n,m;
    cin >> n >> m;

    vector <vector<long long>> point (n,vector <long long>(1));
    vector <long long> t(m);

    for (auto &i:t) cin >> i;

    for (int id=0;id<t.size();id++){
        int found = 0;
        long long min =0;
        for (int pointn =0;pointn<n;pointn++){
            if(found == 0|| point[pointn][0] < point[min][0]){
                found = 1;
                min = pointn; 
            }
        }
        point[min][0] += t[id];
        point[min].push_back(id+1);
    }

    
    for (auto i:point){
        
        i.erase(i.begin());
        if (i.empty()){
            cout << 0 <<endl;
            continue;
        }
        
        for(auto g:i){
            cout << g << " ";
        }
        cout << endl;
    }
}
#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    cin >>n;
    vector <long long> a(n),b(2);
    for(auto &i:a)cin >> i;
    int playerchange = 0;
    
    while(a.size()){
        auto &player = b[playerchange];
        playerchange = 1-playerchange;
            bool found = false;
            int best_index = 0;
            for(int i =0;i<a.size();i++){
                if(a[i] <= player){
                    if(a[i] >=a[best_index] || !found){
                        best_index = i;
                        found = true;
                    }
                    
                }
            }
            if (!found){
                    for(int i =0;i<a.size();i++){
                        if(a[best_index] > a[i]){
                            best_index= i;
                        
                    }
                }
            }
            player += a[best_index];
            a.erase(a.begin()+best_index);
            
            
            
        }
    for(auto i : b) cout << i << " ";
}
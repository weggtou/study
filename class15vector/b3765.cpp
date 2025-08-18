#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector <vector<int>> w (n);

    for (auto &i:w){
        int n2;
        cin >> n2;
        i.resize(n2);
        for (auto &g:i){
            cin >> g;
        }
    }

    w.insert(w.begin(),vector <int>());

    vector <bool> look(n+1);
    look [1] = true;
    for (auto i: w[1]){
        look [i] = true;
        for(auto g:w[i]){
            look [g] = true;
        }
    }

    int all = 0;
    for (auto i :look) all +=i;

    cout << all << endl;

}
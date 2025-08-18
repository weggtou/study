#include <iostream>
#include <vector>
using namespace std;

int main (){
    int n;
    cin >> n;
    vector <int> v1(n);
    for (auto &g :v1){
        cin >> g;
    }
    // while(true){
    //     v1.insert(v1.begin(),v1.back());
    //     v1.pop_back();
    //     for (auto &g : v1){
    //         cout << g << " ";
    //     }
    //     cout << endl;
    //     if (v1.back() == n){
    //         break;
    //     }
    // }遇到这种先操作在判断，也就是python中一直循环的操作可以用do while
    do{
        v1.insert(v1.begin(),v1.back());
        v1.pop_back();
        for (auto &g : v1){
            cout << g << " ";
        }
    }while(v1.back() != n);//记得打分号
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    struct Student
    {
        string name;
        int grade;
    };
    Student a[n];
    for (auto &[na,g]:a){
        cin >> g>>na;

    }
    sort(a,a+n,[&](Student &s1,Student &s2){
        return s1.grade>s2.grade;
    });

    cout << a[0].name;
    

    //c++语法
    vector <pair<int,string>> vec(n);
    for (auto&[g,na]:vec){
        cin >>g>>na;
    }
    cout << max_element(vec.begin(),vec.end())->second;//这里返回的是指针可以用->来访问结构体成员


}
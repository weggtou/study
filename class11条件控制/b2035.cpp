#include <iostream>
#include <format>
using namespace std;

int main (){
    long long N ;
    cin >> N;
    if (N > 0 ){
        cout << "positive" << endl;
    }else if(N==0){
        cout << "zero" << endl;
    }else {
        puts ("negative");
    }
}//puts 也可以用于字符串输出

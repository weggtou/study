#include <iostream>
using namespace std;

int main (){
    char a;
    int c,d;
    cin >> c >> d >> a ;
    switch (a){
        case '+':
        cout << c+d<<endl;
        break;
        case '-':
        cout << c-d << endl;
        break;
        case '*':
        cout << c*d << endl;
        break;
        case '/':
        if (bool(d)){
            cout << c/d << endl;
            break;
        }else cout << "Divided by zero!" << endl;
        break;
        default:
        cout << "Invalid operator!" << endl;

    }

}
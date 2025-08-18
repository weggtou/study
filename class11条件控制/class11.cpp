/*
if (条件) {
执行的代码；
}else if (条件) {
执行的代码；
}else{
执行的代码；
}
整个if是一个作用域，作用域中的内容可以访问作用域外的内容，但是作用域外的内容不能访问作用域内的内容
int a,b = 10 ,11;
if (true) {
int a = 9;
cout << ('%d %d',a,b)<<endl;

}
cout << ('%d %d',a,b) << endl;
*/
#include <iostream>
#include <format>
using namespace std;

// int main (){
//     int a = 10;
//     if (true){
//         int a = 11;
//         cout << a << endl;
//     }
// }
int main (){
    int a = 10;
    if (int a = 11;false) {
        cout << a << endl;
    }else cout << a-1 << endl;//当if或else后只有一句话时可以不用大括号，更简洁
}//在if括号内加一个定义可以在整个if，else中使用
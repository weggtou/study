#include <iostream>
#include <format>
/*
多行注释
*/
using namespace std;
int main (){
    int a,b;
    cin >> a>>b; //cin :c input 输入,输入多个数据直接在后面跟 >>变量名
    cout << a << ' '<<b << endl;
    /*
    可以发现 cout函数在打印多个项目时非常的复杂，所以要用到format（格式化）
    使用前需要引入format头文件
    */
    cout << format ("{}+{}={}",a,b,a+b) << endl; //使用方法，如图“”中为后面数据
    //的格式
    scanf ("%d",&a);
    printf("%d",a);
    printf("%d + %d =%d",a,b,a+b);
    //c语言风格

}
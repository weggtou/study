// #include <iostream>
// using namespace std ;
// int main (){
//     int a = 5;
//     cout <<"你妈的" ， a<<endl ;这样无法输出，只能和文中一样<<    <<    <<endl;

// }
#include <iostream>
using namespace std;
int main() {
  /**
   * 编译的时候会给出很多 waning，因为
   * 1. 使用未初始化的变量
   * 2. 将过大的数字保存为 int，很可能会出问题
   * 所以编译器对我们发出了警告
   * 但我们的目的就是为了测试验证，所以可以忽略警告
   */
  int undefined;
  // int 会向系统申请32bit位的空间来储存数据，其中一个二进制数为1bit位，最高位特殊为负的二的31次方，所以当int定义的数超过32bit会变成别的数
  //当未规定初始值时，输出的内容不可预期，因为int申请的位置可能之前用来干了别的，可能是 0，也可能是乱七八糟的数字
  cout << "undefined: " << undefined << endl;
  int normal = 5;
  cout << "normal: " << normal << endl;
  int negative = -10;
  cout << "negative: " << negative << endl;
  // 过大的数字，int 存储不下
  int tooBig = 12345678901;
  cout << "tooBig: " << tooBig << endl;
  
  int intMax = 2147483647;
  cout << "intMax: " << intMax << endl;
  int intMaxPlus = 2147483648;
  cout << "intMax + 1: " << intMaxPlus << endl;

  // 一次定义多个，可以各自跟着初始化
  int a = 1, b, c = 2, d, e = 3;
  cout << a << ' ' << b << ' ' << c << ' ' << d << ' ' << e << endl;
}
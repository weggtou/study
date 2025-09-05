///类型转换

/*赋值运算
浮点数赋值给整型
    直接去除小数部分
    int a = - 1.9
    结果为-1
浮点给浮点
    double 给 float
    精度的转换，容易错误

整型给浮点
    正常情况不会改变，但整数大于2的24次方时，整数的部分bit就会到
    float数的别的位置上，从而产生错误
    同理，当整数大于2的25次方时double也将不再准确

大整型转小整型
    会将大于小整型位置的数据忽略



*/

/*强制转换
在可转换的数据前加上括号和目标类别
或将数据放入括号中，外面加目标类别
    例 double a= 3.14
    printf ("%d %d\n",(int)d,(int)3.14);
    printf ("%d %d\n",int(d),int(3.14));

*/

/*隐式转换级别（浮点数大于其他，不带符号的大于带符号的，越大的级别越高）
bool char short unshort int unint longlong unlonglong float double
不同类型数据运算时，小于级别小于int的都转化为int
级别大于int的转化为级别最大的
例如 bool + char ---> int + int 
long long + float --> float + float

*/


#include <iostream>
#include <format>
using namespace std;

int main (){
    bool a = true;
    cout << format ("{}",int(a)) << endl;

}
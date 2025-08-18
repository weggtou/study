/*数据类型
整型
浮点型
字符型
布尔型*/


/*整型
short       int        long   long long
2            4         4,8       8    字节
int16_t  int32_t               int_64t    别名        
long不同系统有差别，不建议使用
 #include <iostream>
 using namespace std;

 int main (){
     cout << sizeof(int) << endl;//查看数据类型长度
     cout << sizeof(long) << endl;

 }

////////由于存储数据的内存第一位表示正负号，时常用不到，c++提供了所有bit都表示正数的类型
//unsigned short    unsigned int   unsigned long long
//uint16_t          uint32_t       uint64_t
*/


/*字符型
char
int8_t

//用char name = 字符串或数字（数字通过ascii转化为字符串） 来运用
将字符和数字一一对应，用ascii来对应
*/


/*bool 8bit
bool name = ture
coout <<name<< endl 结果为1，反之亦然

*/

/*浮点数
float double
double精度更高

*/

/*auto
自动识别输入的数据 类似python

*/
#include <iostream>
#include <typeinfo>
using namespace std;

int main (){
    auto a = 1;
    auto b = 'a';
    auto c = true;
    auto d = 3.14;
    cout << typeid (a).name()<< typeid (b).name()<<typeid (c).name()<<typeid (d).name()<<endl;



}
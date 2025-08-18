#include <iostream>
#include <format>
using namespace std;

/*
循环
for (定义循环内使用的变量；循环条件；迭代用于改变循环条件相关的变量,运行于每轮循环之后){
每次循环要做的操作
}
例如求一百个数的和

*/
int main (){
    int sum,x;/*默认为0*/
    for (int i = 0;i<100;i++){
        cin >> x;
        sum += x;
    }
}

/*
1.与if相同，循环内定义的变量在循环外不能使用
2.初始化语句，迭代语句都可缺省，但是分号必须存在
3.如果什么都不写，则这个循环会一直运行

*/

/*其他循环方法
while (条件){  在c语言中for和while区别没有python大，在平时写时最好写成if，因为更具有可读性

}
例如循环一百次
*/
int n = 100;
while (n--){/*n--有返回值，为n，而每次循环会执行n自减*/

}
/*do while
先执行循环，再看条件是否成立
do {

}while（条件）；
*/

/*跳转控制
break     continue                               goto
打破循环   跳过后续步骤直接从循环开头再来一遍   跳到标签处
 */
biaoqian:
    a += 1
for (int i =1;i<5;i++){
    a -= 1;
    goto biaoqian;

}//会直接跳出循环到标签处开始执行

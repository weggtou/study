//之前学的叫字符
//现在这个叫字符串
//字符串其实就是由字符组成的数组

/*初始化
char a[n]
char a[] = {'a','b'} 
注意，初始化的字符可以是字符，也可以是字符对应的ascii码
char a[] = "ab"
新的初始化方法，注意，字符串末尾有个看不见的字符\0,ascii为0
所以上述定义的字符串长度为3
在输出字符串时，会从开头输出到\0为止，所以字符串不能没有\0
而当一个字符串中间出现\0时，会终止，不输出后面的字符
而字符串中包含"时要用转义字符转义，不然会不录入后面的字符

cout会对char字符串保护，如果char字符串没有\0,他会默认将最后的位置改为\0
所以并不会出现瞎输出的情况
cin 也会对char字符串进行保护，默认留出最后\0的位置，例如如果开的字符串是3
输入三个元素只会读取两个元素
*/

/*输入
1.和数组一样
2.cin >> a;
直接输入字符串
这种输入会被空格分隔
例如"abc def"
只会输入abc
3.输出
cout << a;
4.cin.getline(a,8)
即使遇到空格也继续读取到固定长度，直到遇到换行
但是可能是c加加为了防止输出乱码，他会默认最后一位为\0
例如例子中长度为8,则最后一位固定\0，实际只会读取7位

*/
/*操作
#include <string.h>

1.strlen(a)
返回字符串长度，
如果字符串内有\0则返回不计\0的长度
在char字符串没有\0时，默认在最后多加一位用来放\0，此时返回包含\0的长度
例
char a [3] = {'1','2','3'};
strlen为4
char a[3] = {'1','2','\0'};
结果为2
2.strcpy(a1,b1)
将b1的内容复制到a1
但是之覆盖b1的长度，a1中多余b1长度的值不会改变
3.strcat(a,b)
将b的内容连接到a\0开始的位置，把\0覆盖掉
相当于两个字符串连接
4.int ord = strcmp(a,b)
按字典序比较ab，返回类似三路比较的结果
ord >0 a>b
ord = 0 a=b
ord <0 a<b
5.char* x = strstr(a,b)
看a中是否包含b
返回指针类型char*
及a中第一次出现b第一个字符串的前面的间隔
int index = x - a
所以 index 就是该字符串在a中的索引
应为a为a.begin()
如果没找到返回Null==0
可以用if(x)判断是否找到了
6.char* tock = strtok(str1,str2)
返回由str2中字符分割的str1的第一个位置，会在将下一个属于str2的字符串变为\0
例如str1 = "+one+two=three"
str2 = "+="
第一次运行char* tock = strtok(str1,str2)
tock会为a的指针，将下一个+变为\0
输出tock会输出one
我估计输出指针会自动输出到\0
且tock有记忆功能
及如果第二次运行只需要写
char* tock = strtok(Null,str)
就会接着上步操作继续进行
输出two
所以char* tock = strtok(str1,str2)
while(tock){
    cout << tock << endl;
    tock = strtok(Null,str2);
}
就会挨个输出分割结果了
7.memcpy(str1,str2,sizeof(str2))
将str2开始的字符串赋值到str1开始的字符串
最后一个参数是大小

#include <stdlib.h>
1.atoi(char)将字符串转为int
"123" to 123
2.atoll(char)将字符串转为long long
3.atof(char)将字符串转为double
任何类型都行比如
1e-4
前提条件是字符串必须格式合格,不然为0

#include <ctype.h>
见图片
9.函数toupper(char)tolower(char)
返回大写返回小写
只对char有用，不能对字符串使用
返回int值，需要转成char
其他的ctype.h类型也同理，只对char有效
*/
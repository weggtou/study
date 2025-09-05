///////高级输出

/*printf

1. 整型
(1)printf ('%d',d)';
    d表示整型以十进制形式输出
   printf ('%o',d);
    八进制
   printf ("%x",d);
    十六进制

   如果把字母改成大写则输出为大写
    如int d = 255
    printf ("%",d);
    结果为FF

(2)printf ('%#o',d);
    会在输出结果中表明是几进制

    如printf ('%#o',d);
    结果为0377

（4）printf ("%lld",lld);
    printf ("%hd",short);
    printf ("%hu",unsigned short);
    输入特定长度的数字需要特定的%  ，不然会出错

2.字符型
char c = 'a'
printf ("%C",C);

3.bool
printf 不能输出true或false，只能用整型形式输出bool值，true为1false为0

4.小数
(1)printf ("%f",f);
    以固定保留位数(6位）输出小数
    printf ("%.8f",f); = printf ("%*f",8,f);
    固定保留位数输出，如图中保留八位有效数字,也可以用*占位符替代
    
(2)printf ("%e"，f);
    以科学计数法的形式输出

(3)printf ("%g",f);
    保留6  个  有效数字，超过了就转化成科学计数法

(4)printf ("%a",f);
    以c语言中固定的小数保存方法输出数据，详情见基础数据类型

(5)printf ("%.10lf",double);
    使用double时需要在f前加l，其他的都与float相同，但double更精确，所以
    一般用double
5.对齐
printf ("%7d",d)
    7为定义的输出数据的默认占用长度，默认为右对齐，-7为左对齐

*/

/*cout
1.整数
(1)cout << oct ;
    让之后cout输出的所有的数据都按八进制输出
    相同的，cout << dec;十进制
    cout << hex;十六进制
    cout << uppercase ;将16进制的字母显示为大写
    cout << unuppercase ;取消大写
    cout << showbase ;显示进制符号

2.字符串
cout << a <<endl;

3.bool
bool t = true
bool f = false 
cout << t << f <<endl;
结果为0和1
想输出true或flase需要加
cout << boolalpha;

4.浮点型
cout << fixed
cout << f << endl
对应printf中的%f
cout << scientific
cout << f << endl 
对应printf中的%e
cout << defaultfloat
对应printf中的g
cout << hexfloat
对应printf中的a
cout.precision(8)
cout << fixed
对应printf中的%.8f

5.对齐
cout.width(7)
对应printf中的%7
这个只能临时成立不能永久成立
cout << left;
用left和right控制左对齐又对齐
*/

/*format
1.整数
（1）cout << format ("{}",d) << endl;
    cout << format ("{:#x}",d) << endl;
    与printf相同，且不需要声明字符长度和符号，可自动识别
（2）cout << format ("{:b}"，d)  << endl;
    二进制输出

2.字符型
cout << format ("{:d} {:c}",c，97) << endl;
d 是将字符以ascii码表对应的数字输出，c是输出数字对应的字符

3.bool
cout << format ("{} {}",t,f) << endl;
 与上面两个不同formate默认输出true和false，
 cout << format ("{:d}",t) << endl；
 输出的才是0或1

 4.小数
 (1)cout << format ("{:f}",f) << endl;
    cout << format ("{:e}",f) << endl;
    cout << format ("{:g}",f) << endl;
    cout << format ("{:a}",f) << endl;
    与printf 相同
 (2)cout << format ("{}",f) << endl;
    自动识别最精确的输出方式
 
 (3) cout << format ("{:.8f}"，f) << endl;
    指定保留位数
    cout << format ("{:.{}f}",f,8) << endl;
    可通过输入的数字指定保留位数
5.对齐
cout << format ("{:<7}",a) << endl;
占7位，左对齐
cout << format ("{:^7}",a) << endl;
占7位居中

6.format
format ("{指定的数据：输出的方式}"，数据) 
如 cour ("{2:.7f}",f,a,b) << endl;
则输出的数为保留七位小数的b

*/
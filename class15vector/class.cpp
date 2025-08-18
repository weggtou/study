/*vector 动态数组容器
高级数组，不需要提前申明大小
*/
/*使用
#include <vector>
1.
    vector <类型> 命名；
    vector <vector <类型> > 命名；(二维)

2.
    vector <int> a(容器大小)；
    和数组一样，开一个容器大小的空间，但是数不是随机，默认为0
    vector <int> a(容器大小，指定值)
    填充指定值
    vector <int> a{1,2,3}
    定义初始值
    vector <int> a(a1)
    和另一个可变容器a1一样，或用auto a = a1
    vector <vector <int>> a(2,vector<int>(8,3))
    二维，最外层的值和类型一律用另一个定义来代替

3.auto
    auto a = vector(1,2)
    auto a = vector(2,vector(8,3))
    和python类似


*/

/*访问
1.索引
    a[1]
2.at
    a.at(1)
    区别是超出范围会报错
*/

/*输入,输出
1.push_back
    a.push_back(1);
2.size()
    a.size()
    值为容器大小
3.&
    和普通数组一样
    只有在初始化时定义了大小才可以，不然刚开始是没有大小的

*/

/*比较
和python中的列表一样

*/

/*常用函数
1.a.front()
    获取第一个函数
2.a.back()
    获取最后一个元素
3.a.size()
    获取大小
4.a.empty()
    判断当前是否为空，输出bool值
5.a.clear()
    清空
6.a.push_back(x)
    将x数据塞入末尾
7.a.pop_back()
    将最后一个移除
8.a.resize(n)
    重新定义大小
    如果原先的大，之保留前n个
    如果原先的小，则新加的空位都为0
    resize(n,x)
    如果有x则用x来填充
9.a.begin() a.end()
    返回起始和末尾迭代器，
    迭代器可以理解为每个数据格子之间的间隔
    其实迭代器就是第一个值的储存空前前面的墙壁
    末尾同理
    可以通过迭代器快速访问容器中的元素
    for (vector<int>::iterator = a.begin();iter!=a.end();iter++){
        *iter;
    }
    其中vector<int>::iterator为迭代器类型，和int一样都是类型
    为了方便，可以换成auto这样就简单一些
    iter++并非运算，而是到下一个间隔，a.begin()+4就是第五个间隔
    *iter及获取迭代器对应的元素，及迭间隔后面的元素
10.erase()
    删除元素，括号中的值为迭代器
    erase(a.begin()+1)就是删除第二个值
    如果有两个元素就是范围，删除两个间隔中间的数
    erase(a.begin()+1,a.begin()+3)
    就是删除索引为1和2的元素
11..insert()
    插入
    insert(iter,值)
    iter为迭代器，及间隔
    值可以是单个数，也可以是{}括起来的多个数
    也可以是另一个容器的范围
    a.insert(iter,a2.begin(),a2.end())

12.#include <algorithm> reverse
    reverse(a.begin(),a.end())
    反转对应位置

*/
#include <iostream>//引入头文件，比c更牛的标准头文件，为input output stream的缩写
using namespace std;//声明接下来都用std 为空间名的函数；解决重名冲突，也可以在下面 的cout前加std：：   endl前加std：：

int main (){
    cout <<"hello world"<< endl;//cout 为打印函数，与printf类似，endl类似/n
    // << "   "<<为特殊操作符，代表<<  << 中的内容流向cout
    cout <<"  *"<< endl <<" ***"<< endl ;

}
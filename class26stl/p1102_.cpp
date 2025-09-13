#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
  unordered_map <int,int> record;
  long long all=0;
  int n;
  cin >> n;
  int c;
  cin >> c;
  while(n--){
    int x;
    cin >> x;
    all+= record[x-c];//每个相同的数是不同的，输入的数没有顺序
    //如果输入的是一个大数，只能找到比他小的数，那么大数只能作为被减数
    //但是如果在输入的数之前有比他大的有比他小的，就都要算一遍
    //如果是一个数没有加全时就被数掉了，那么在新数加入时也会重新加
    //一遍漏掉的次数，不会有影响
    all += record[x+c];
    record[x]++;
  }

  cout << all;
}
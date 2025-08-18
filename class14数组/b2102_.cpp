#include <iostream>
using namespace std;

int main (){
    int l[5][5],x=0,m;
    int b,y;
    for (auto &line :l){
        for (auto &i :line){
            cin >> i;
        }
    }
    
    for (int i =0;i<5;i++){
        m=0;//重要的值记得初始化
        for (int g =0;g<5;g++){
            if (l[i][g]>m){
                m = l[i][g];
                b = g;

            }
        }
        for (int k = 0;k<5;k++){
            if (l[k][b]<m){
                y = 0;
                break;
            }else {
                y = 1;
                
            }
        }
        if (y == 1){
            cout << i+1 <<" "<< b+1 <<" "<< l[i][b]<<endl;
            x +=1;
        }

        
    }
    if (x == 0){
        cout << "not found" <<endl;//c只能双引号
    }
}
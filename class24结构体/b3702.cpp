#include <vector>
#include <iostream>
using namespace std;
int main(){
    int m,n,x,y;
    cin >> m>>n>>x>>y;
    struct zuobiao
    {
        int x1;
        int y1;        
    };
    
    vector <vector<zuobiao>> a(n,vector<zuobiao>(m));
    for(auto &i:a){for (auto &[x,y]:i)cin>> x>>y;}
    int nx,ny;
    while (1)
    {   
        nx=x;ny=y;
        cout << x<<' '<<y<<endl;
        x = a[nx-1][ny-1].x1;
        y = a[nx-1][ny-1].y1;
        if (x==0&&y==0)break;
    }
    


}
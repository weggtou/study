#include <iostream>
#include <sstream>
using namespace std;
int dis(istringstream &ss){
    int all=0;
    char x;
    while(ss >> x){        
        if (x=='F'){
            ss>>x;
            int a;
            ss>>a;
            all+=a;
        }else if(x=='B'){
            ss>>x;
            int a;
            ss>>a;
            all-=a;
        }else if(x=='R'){
            int r =5;
            while(r--)ss>>x;
            int a;
            ss>>a;
            all+=a*dis(ss);
        }else if(x==']'){
            return all;
        }
    }
    return all;
}
int main(){
    string line;
    getline(cin, line);
    istringstream ss(line);
    cout <<abs(dis(ss));
}
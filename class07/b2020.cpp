#include <iostream>
#include <format>
using namespace std;

int main (){
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int div3 = a/3;
    int sum = 0;
    sum += a%3;
    a = div3;
    e += div3;
    b += div3;
    
    
    sum += b%3;
    int div4 = b/3;
    a += div4;
    c += div4;
    b = div4;
    

    sum += c%3;
    int div5 = c/3;
    b += div5;
    d += div5;
    c = div5;
    
    sum += d%3;
    int div6 = d/3;
    e += div6;
    c += div6;
    d = div6;
    
    sum += e%3;
    int div7 = e/3;
    a += div7;
    d += div7;
    e = div7;
    

    cout << format ("{} {} {} {} {}",a,b,c,d,e)<< endl;
    cout << sum << endl;
    


    
}
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    set <int> a{1,2,3,4,5};
    a.insert(10);
    cout << *a.lower_bound(10);
}
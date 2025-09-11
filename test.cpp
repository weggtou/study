#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int main(){
    map<int,int> x;
    x.emplace(1,1);
    x.emplace(2,2);
    auto &[a,b] = *x.find(2);
}
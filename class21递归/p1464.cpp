#include <iostream>
#include <format>
using namespace std;

long long memo[21][21][21] = {0};

long long w(long long a, long long b, long long c) {
    if (a <= 0 || b <= 0 || c <= 0) return 1;
    if (a > 20 || b > 20 || c > 20) return w(20, 20, 20);
    if (memo[a][b][c] != 0) return memo[a][b][c];
    long long res;
    if (a < b && b < c) {
        res = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    } else {
        res = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    }
    memo[a][b][c] = res;
    return res;
}

int main() {
    long long a, b, c;
    while (true) {
        cin >> a >> b >> c;
        if (a == -1 && b == -1 && c == -1) break;
        cout << format("w({}, {}, {}) = {}", a, b, c, w(a, b, c)) << endl;
    }
}
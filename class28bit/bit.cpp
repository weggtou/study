#include <bits/stdc++.h>
using namespace std;
class bit {
  using u64 = unsigned long long;
  u64 v = 0;
  // 辅助类，下标取值时的代理
  class Reference {
    u64 &val, msk;

   public:
    Reference(u64& val, u64 msk) : val(val), msk(msk) {}
    Reference& operator=(bool v) {
      if (v)
        val |= msk;
      else
        val &= ~msk;
      return *this;
    }
    Reference& operator^=(bool v) {
      if (v) val ^= msk;
      return *this;
    }
    operator bool() { return val & msk; }
  };

 public:
  // 按值初始化
  bit(u64 v = 0) : v(v) {}
  // 字符串初始化
  bit(const string& str) { *this = str; }
  // 按位初始化
  bit(const initializer_list<int>& indexes) { *this = indexes; }
  bit& operator=(u64 _v) {
    v = _v;
    return *this;
  }
  bit& operator=(const string& str) {
    v = 0;
    for (char c : str) v = (v << 1) | (c - '0');
    return *this;
  }
  bit& operator=(const initializer_list<int>& indexes) {
    v = 0;
    for (auto index : indexes) {
      v |= (1 << index);
    }
    return *this;
  }
  bit& operator+=(u64 x) { return v += x, *this; }
  bit& operator-=(u64 x) { return v -= x, *this; }
  bit& operator*=(u64 x) { return v *= x, *this; }
  bit& operator/=(u64 x) { return v /= x, *this; }
  bit& operator%=(u64 x) { return v %= x, *this; }
  bit& operator&=(u64 x) { return v &= x, *this; }
  bit& operator|=(u64 x) { return v |= x, *this; }
  bit& operator^=(u64 x) { return v ^= x, *this; }
  bit& operator<<=(u64 x) { return v <<= x, *this; }
  bit& operator>>=(u64 x) { return v >>= x, *this; }
  bit& operator++() { return ++v, *this; }
  bit operator++(int) { return bit(v++); }
  bit& operator--() { return --v, *this; }
  bit operator--(int) { return bit(v--); }

  Reference operator[](int index) { return Reference(v, 1 << index); }
  bool operator[](int index) const { return (v >> index) & 1; }

  operator u64() { return v; }
  string to_string() {
    if (v == 0) return "0";
    int len = 64 - countl_zero();
    string str(len, '0');
    for (u64 x = v; x; x >>= 1, len--)
      if (x & 1) str[len - 1] = '1';
    return str;
  }
  bool test(int index) { return (v >> index) & 1; }
  template <typename... Args>
  bool test_all(Args... index) {
    return (test(index) && ...);
  }
  template <typename... Args>
  bool test_any(Args... index) {
    return (test(index) || ...);
  }
  template <typename... Args>
  bool test_none(Args... index) {
    return (!test(index) && ...);
  }
  // 获取最低位的 1, lsb = Lowest Significant Bit
  u64 lsb() { return v & -v; }
  bit& clear_lsb() { return v &= (v - 1), *this; }

  unsigned countl_zero() { return v == 0 ? 64 : __builtin_clzll(v); }
  unsigned countr_zero() { return v == 0 ? 64 : __builtin_ctzll(v); }
  unsigned countl_one() { return v == 0 ? 0 : __builtin_clzll(~v); }
  unsigned countr_one() { return v == 0 ? 0 : __builtin_ctzll(~v); }
  unsigned count_one() { return __builtin_popcountll(v); }
  template <typename... Args>
  bit set(Args... index) {
    return v | ((1ull << index) | ...);
  }
  template <typename... Args>
  bit reset(Args... index) {
    return v & ~((1ull << index) | ...);
  }
  template <typename... Args>
  bit flip(Args... index) {
    return v ^ ((1ull << index) | ...);
  }
  // 清空低 n 位
  bit clear(int n) { return v & ~((1ull << (n + 1)) - 1); }
  // 设置低 n 位
  bit fill(int n) { return v | ((1ull << (n + 1)) - 1); }
  // 判断是 2 的幂次
  bool is_single_bit() { return v != 0 && (v & (v - 1)) == 0; }
  // 不小于 x 的最小的二的整数次幂
  bit bit_ceil() { return 1ull << (64 - __builtin_clzll(v - 1)); }
  // 只包含 1 的有效宽度
  unsigned bit_with() {
    if (v == 0) return 0;
    return 64 - countl_zero() - countr_zero();
  }
  // 向左循环旋转
  bit rotl(unsigned s, unsigned width = 64) {
    s %= width;
    u64 mask = (1ull << width) - 1;
    return (v >> (width - s)) | ((v << s) & mask);
  }
  // 向右循环旋转
  bit rotr(unsigned s, unsigned width = 64) {
    s %= width;
    u64 mask = (1ull << s) - 1;
    return ((v & mask) << (width - s)) | (v >> s);
  }
  bool is_odd() { return v & 1; }
  bool is_even() { return !(v & 1); }
  friend istream& operator>>(istream& is, bit& x) { return is >> x.v; }
  friend ostream& operator<<(ostream& os, const bit& x) { return os << x.v; }
};
// int main() {
//   bit n, K;
//   cin >> n >> K;
//   bit limit({n + 1});
//   bit dp[n * n + 1][K + 1][(int)limit] = {};
//   dp[0][0][0] = 1;
//   for (bit pos = 0; pos < n * n; ++pos) {
//     bit j = pos % n;
//     for (bit k = 0; k <= K; ++k) {
//       for (bit st = 0; st < limit; ++st) {
//         if (!dp[pos][k][st]) continue;
//         bit nst = st.reset(n);
//         if (st.test_none(n, j - 1, j, j + 1) && k < K) {
//           dp[pos + 1][k + 1][nst.set(j)] += dp[pos][k][st];
//         }
//         nst = (j == n - 1 || !st[j]) ? nst.reset(n) : nst.set(n);
//         dp[pos + 1][k][nst.reset(j)] += dp[pos][k][st];
//       }
//     }
//   }
//   cout << accumulate(dp[n * n][K], dp[n * n][K] + limit, 0ll) << endl;
// }
int main() {
  int n, K;
  cin >> n >> K;
  int limit = 1 << (n + 1);
  long long dp[n * n + 1][K +1][limit] = {};
  dp[0][0][0] = 1;
  for (int pos = 0; pos < n * n; pos++) {
    int j = pos % n;
    for (int k = 0; k <= K; k++) {
      for (int st = 0; st < limit; ++st) {
        if (!dp[pos][k][st]) continue;
        int ul = (st >> n) & 1;
        int cols = st - (ul << n);
        if (!ul && !(cols & ((1 << j >> 1) | (1 << j) | (1 << j << 1))) && k < K) {
          dp[pos + 1][k + 1][cols | (1 << j)] += dp[pos][k][st];
        }
        int nul = (cols >> j) & 1;
        int ncols = cols & (~(1 << j));
        if (j == n - 1) nul = 0;
        dp[pos + 1][k][(nul << n) | ncols] += dp[pos][k][st];
      }
    }
  }
  cout << accumulate(dp[n * n][K], dp[n * n][K] + limit, 0ll) << endl;
}
// int main() {
//   int N, K;
//   cin >> N >> K;
//   int limit = 1 << N;
//   auto nexts = vector(limit, vector<pair<int, int>>());
//   for (int st = 0; st < limit; ++st) {
//     for (int nst = 0; nst < limit; ++nst) {
//       if (nst & (nst << 1)) continue;
//       if (nst & ((st << 1) | st | (st >> 1))) continue;
//       int cnt = __builtin_popcount(nst);
//       nexts[st].emplace_back(nst, cnt);
//     }
//   }

//   long long dp[N + 1][K + 1][limit] = {};
//   dp[0][0][0] = 1;
//   for (int row = 0; row < N; ++row) {
//     for (int k = 0; k <= K; ++k) {
//       for (int st = 0; st < limit; ++st) {
//         if (dp[row][k][st] == 0) continue;
//         for (auto& [nst, cnt] : nexts[st]) {
//           if (k + cnt > K) continue;
//           dp[row + 1][k + cnt][nst] += dp[row][k][st];
//         }
//         // for (int nst = 0; nst < limit; ++nst) {
//         //   if (nst & (nst << 1)) continue;
//         //   if (nst & ((st << 1) | st | (st >> 1))) continue;
//         //   int cnt = __builtin_popcount(nst);
//         //   if (k + cnt > K) continue;
//         //   dp[row + 1][k + cnt][nst] += dp[row][k][st];
//         // }
//       }
//     }
//   }
//   cout << accumulate(dp[N][K], dp[N][K] + limit, 0ll) << endl;
// }
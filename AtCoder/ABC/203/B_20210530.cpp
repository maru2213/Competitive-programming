#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using Pii = pair<int, int>;

int main() {
  int n, k;
  cin >> n >> k;
  cout << 100 * n * (n + 1) / 2 * k + n * k * (k + 1) / 2 << endl;
  return 0;
}

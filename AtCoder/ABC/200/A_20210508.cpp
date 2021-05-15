#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;
  if (n % 100 == 0) {
    n /= 100;
  } else {
    n /= 100;
    n += 1;
  }
  cout << n << endl;
  return 0;
}

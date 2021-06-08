#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using Pii = pair<int, int>;

int main() {
  int count = 0;
  int n;
  cin >> n;
  rep(i, n) {
    int a;
    cin >> a;
    if (a <= 10) {
      continue;
    }
    count += a - 10;
  }
  cout << count << endl;
  return 0;
}

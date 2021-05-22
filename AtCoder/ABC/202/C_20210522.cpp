#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using Pii = pair<int, int>;

int main() {
  int n;
  cin >> n;
  vector<int> b(n);
  vector<int> a_count(n), b_count(n), c_count(n);
  rep(i, n) {
    int x;
    cin >> x;
    a_count[x - 1]++;
  }
  rep(i, n) {
    int x;
    cin >> x;
    b_count[x - 1]++;
    b[i] = x;
  }
  rep(i, n) {
    int x;
    cin >> x;
    c_count[x - 1]++;
  }
  
  ll count = 0;
  rep(i, n) {
    count += a_count[b[i] - 1] * c_count[i];
  }
  cout << count << endl;
  return 0;
}

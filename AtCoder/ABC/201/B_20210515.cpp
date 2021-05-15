#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;

  vector<pair<int, string>> data(n);
  rep(i, n) {
    string s;
    int t;
    cin >> s >> t;
    data[i] = make_pair(t, s);
  }
  
  sort(data.rbegin(), data.rend());

  cout << data[1].second << endl;
  return 0;
}

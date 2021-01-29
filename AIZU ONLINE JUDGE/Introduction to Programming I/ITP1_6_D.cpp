#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  vector<int> b(m);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a.at(i).at(j);
    }
  }
  for (int i = 0; i < m; i++) {
    cin >> b.at(i);
  }
  for (int i = 0; i < n; i++) {
    int c = 0;
    for (int j = 0; j < m; j++) {
      c += a.at(i).at(j) * b.at(j);
    }
    cout << c << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m, l;
  cin >> n >> m >> l;
  vector<vector<int>> A(n, vector<int>(m));
  vector<vector<int>> B(m, vector<int>(l));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> A.at(i).at(j);
    }
  }
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < l; j++) {
      cin >> B.at(i).at(j);
    }
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < l; j++) {
      int64_t c = 0;
      for (int k = 0; k < m; k++) {
        c += A.at(i).at(k) * B.at(k).at(j);
      }
      cout << c;
      if (j != l - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<pair<int, int>> data(n);
  for (int i = 0; i < n; i++) {
    int a, b;
    cin >> a >> b;
    data.at(i) = make_pair(b, a);
  }
  sort(data.begin(), data.end());
  for (int i = 0; i < n; i++) {
    int a, b;
    tie(b, a) = data.at(i);
    cout << a << " " << b << endl;
  }
  return 0;
}

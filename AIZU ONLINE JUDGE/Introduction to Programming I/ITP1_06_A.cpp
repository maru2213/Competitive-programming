#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> data(n);
  for (int i = 0; i < n; i++) {
    cin >> data.at(i);
  }
  reverse(data.begin(), data.end());
  for (int i = 0; i < n; i++) {
    cout << data.at(i);
    if (i != n - 1) {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  int row_sum = 0;
  vector<int> column_sum(c, 0);
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      int x;
      cin >> x;
      row_sum += x;
      column_sum.at(j) += x;
      cout << x << " ";
    }
    cout << row_sum << endl;
    row_sum = 0;
  }
  for (int i = 0; i < c; i++) {
    cout << column_sum.at(i);
    row_sum += column_sum.at(i);
    if (i == c - 1) {
      cout << " " << row_sum << endl;
    } else {
      cout << " ";
    }
  }
  return 0;
}

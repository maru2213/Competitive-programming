#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<vector<int>>> data(4, vector<vector<int>>(3, vector<int>(10)));
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int b, f, r, v;
    cin >> b >> f >> r >> v;
    data.at(b - 1).at(f - 1).at(r - 1) += v;
  }
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 3; j++) {
      for (int k = 0; k < 10; k++) {
        cout << " " << data.at(i).at(j).at(k);
      }
      cout << endl;
    }
    if (i != 3) {
      cout << "####################" << endl;
    }
  }
  return 0;
}

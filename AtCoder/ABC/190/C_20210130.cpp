#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> conditions(m, vector<int>(2));
  for (int i = 0; i < m; i++) {
    int a, b;
    cin >> a >> b;
    conditions.at(i).at(0) = a - 1;
    conditions.at(i).at(1) = b - 1;
  }

  int k;
  cin >> k;
  vector<vector<int>> people(k, vector<int>(2));
  for (int i = 0; i < k; i++) {
    int c, d;
    cin >> c >> d;
    people.at(i).at(0) = c - 1;
    people.at(i).at(1) = d - 1;
  }

  int maximum = 0;
  for (int i = 0; i < (1 << k); i++) {
    bitset<16> s(i);
    vector<int> dishes(n, 0);
    for (int j = 0; j < k; j++) {
      if (s.test(j)) {
        dishes.at(people.at(j).at(1))++;
      } else {
        dishes.at(people.at(j).at(0))++;
      }
    }

    int count = 0;
    for (int j = 0; j < m; j++) {
      if (dishes.at(conditions.at(j).at(0)) != 0 && dishes.at(conditions.at(j).at(1)) != 0) {
        count++;
      }
    }
    maximum = max(maximum, count);
  }
  cout << maximum << endl;
  return 0;
}

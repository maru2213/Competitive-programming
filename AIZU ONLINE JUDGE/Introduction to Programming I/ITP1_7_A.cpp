#include <bits/stdc++.h>
using namespace std;

int main() {
  while (true) {
    int m, f, r;
    cin >> m >> f >> r;
    string score;
    int s = m + f;
    if (m == -1 && f == -1 && r == -1) {
      break;
    }
    if (m == -1 || f == -1) {
      score = "F";
    } else if (s >= 80) {
      score = "A";
    } else if (s >= 65) {
      score = "B";
    } else if (s >= 50) {
      score = "C";
    } else if (s >= 30) {
      if (r >= 50) {
        score = "C";
      } else {
        score = "D";
      }
    } else {
      score = "F";
    }
    cout << score << endl;
  }
  return 0;
}

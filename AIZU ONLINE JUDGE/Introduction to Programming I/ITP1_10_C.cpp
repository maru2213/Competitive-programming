#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  while (true) {
    int n;
    cin >> n;
    if (n == 0) {
      break;
    }
    vector<int> points(n);
    double sum = 0;
    rep (i, n) {
      cin >> points[i];
      sum += points[i];
    }

    double ave = sum / n;
    double s2 = 0;

    rep (i, n) {
      s2 += pow(points[i] - ave, 2);
    }
    s2 /= n;

    printf("%.8lf\n", sqrt(s2));
  }
  return 0;
}

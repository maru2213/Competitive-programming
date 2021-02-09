#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >> n;
  vector<int> x(n);
  vector<int> y(n);
  rep (i, n) cin >> x[i];
  rep (i, n) cin >> y[i];

  double mink_1 = 0;
  double mink_2 = 0;
  double mink_3 = 0;
  double mink_inf = 0;
  rep (i, n) {
    mink_1 += abs(x[i] - y[i]);
    mink_2 += pow(x[i] - y[i], 2);
    mink_3 += pow(abs(x[i] - y[i]), 3);
    mink_inf = max((int)mink_inf, abs(x[i] - y[i]));
  }
  printf("%.8lf\n%.8lf\n%.8lf\n%.8lf\n", mink_1, sqrt(mink_2), cbrt(mink_3), mink_inf);
  return 0;
}

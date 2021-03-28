#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x0, y0, xh, yh;
  cin >> n >> x0 >> y0 >> xh >> yh;

  double xc = (x0 + xh) / 2.0;
  double yc = (y0 + yh) / 2.0;

  double xc0 = x0 - xc;
  double yc0 = y0 - yc;

  double rad = 2 * M_PI / n;
  double xc1 = xc0 * cos(rad) - yc0 * sin(rad);
  double yc1 = xc0 * sin(rad) + yc0 * cos(rad);

  double x1 = xc1 + xc;
  double y1 = yc1 + yc;

  printf("%.10lf %.10lf\n", x1, y1);

  return 0;
}

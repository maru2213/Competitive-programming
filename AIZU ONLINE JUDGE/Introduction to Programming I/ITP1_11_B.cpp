#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep2(i, s, n) for (int i = (s); i < (int)(n); i++)
using ll = long long;
using Pii = pair<int,int>;

struct Dice {
  vector<int> numbers;

  Dice() : numbers({0, 0, 0, 0, 0, 0}){}

  void n() {
    int one = numbers[0];
    numbers[0] = numbers[1];
    numbers[1] = numbers[5];
    numbers[5] = numbers[4];
    numbers[4] = one;
  }

  void s() {
    int one = numbers[0];
    numbers[0] = numbers[4];
    numbers[4] = numbers[5];
    numbers[5] = numbers[1];
    numbers[1] = one;
  }

  void e() {
    int one = numbers[0];
    numbers[0] = numbers[3];
    numbers[3] = numbers[5];
    numbers[5] = numbers[2];
    numbers[2] = one;
  }

  void w() {
    int one = numbers[0];
    numbers[0] = numbers[2];
    numbers[2] = numbers[5];
    numbers[5] = numbers[3];
    numbers[3] = one;
  }
};

int main() {
  vector<int> nums(6);
  rep (i, 6) {
    cin >> nums[i];
  }

  Dice d;
  d.numbers = nums;

  int q;
  cin >> q;
  rep (i, q) {
    int u, f;
    cin >> u >> f;
    if (f == d.numbers[0]) {
      d.s();
    } else if (f == d.numbers[1]) {
      //nop
    } else if (f == d.numbers[2]) {
      d.w();
      d.s();
    } else if (f == d.numbers[3]) {
      d.e();
      d.s();
    } else if (f == d.numbers[4]) {
      d.n();
      d.n();
    } else if (f == d.numbers[5]) {
      d.n();
    }
    while (d.numbers[0] != u) {
      d.e();
    }
    cout << d.numbers[2] << endl;
  }
  return 0;
}

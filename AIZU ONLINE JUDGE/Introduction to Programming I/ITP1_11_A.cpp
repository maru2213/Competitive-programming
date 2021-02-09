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
  string orders;
  rep (i, 6) {
    cin >> nums[i];
  }
  cin >> orders;

  Dice d;
  d.numbers = nums;

  rep (i, orders.size()) {
    if (orders.at(i) == 'N') {
      d.n();
    } else if (orders.at(i) == 'S') {
      d.s();
    } else if (orders.at(i) == 'E') {
      d.e();
    } else if (orders.at(i) == 'W') {
      d.w();
    }
  }

  cout << d.numbers[0] << endl;
  return 0;
}

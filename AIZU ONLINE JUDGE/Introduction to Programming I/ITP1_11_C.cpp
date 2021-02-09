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

  vector<vector<int>> minCountNumberSurface() {
    int min_count = 1000;
    vector<int> min_num;
    rep (i, 6) {
      int x = 0;
      rep (j, 6) {
        if (numbers[i] == numbers[j]) x++;
      }
      if (min_count > x) {
        min_count = x;
        min_num = {numbers[i]};
      } else if (min_count == x) {
        bool flag = false;
        rep (j, min_num.size()) {
          if (min_num[j] == numbers[i]) {
            flag = true;
            break;
          }
        }
        if (!flag) {
          min_num.push_back(numbers[i]);
        }
      }
    }
    vector<vector<int>> surfaces;
    rep (i, min_num.size()) {
      vector<int> temp;
      rep (j, 6) {
        if (min_num[i] == numbers[j]) {
          temp.push_back(j);
        }
      }
      surfaces.push_back(temp);
    }
    return surfaces;
  }
};

int main() {
  vector<int> nums1(6);
  vector<int> nums2(6);
  rep (i, 6) {
    cin >> nums1[i];
  }
  rep (i, 6) {
    cin >> nums2[i];
  }

  Dice d1, d2;
  d1.numbers = nums1;
  d2.numbers = nums2;
  vector<vector<int>> min_surface1 = d1.minCountNumberSurface();

  rep (i, min_surface1.size()) {
    rep (j, min_surface1[i].size()) {
      d1.numbers = nums1;
      switch (min_surface1[i][j]) {
        case 0:
          d1.s();
          break;
        case 1:
          //nop
          break;
        case 2:
          d1.w();
          d1.s();
          break;
        case 3:
          d1.e();
          d1.s();
          break;
        case 4:
          d1.n();
          d1.n();
          break;
        case 5:
          d1.n();
          break;
      }

      if (d1.numbers[1] == d2.numbers[0]) {
        d2.s();
      } else if (d1.numbers[1] == d2.numbers[1]) {
        //nop
      } else if (d1.numbers[1] == d2.numbers[2]) {
        d2.w();
        d2.s();
      } else if (d1.numbers[1] == d2.numbers[3]) {
        d2.e();
        d2.s();
      } else if (d1.numbers[1] == d2.numbers[4]) {
        d2.n();
        d2.n();
      } else if (d1.numbers[1] == d2.numbers[5]) {
        d2.n();
      }

      rep (i, 4) {
        if (d1.numbers == d2.numbers) {
          cout << "Yes" << endl;
          return 0;
        }
        d2.e();
      }
    }
  }
  cout << "No" << endl;
  return 0;
}

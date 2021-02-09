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

  bool operator==(Dice other) {
    vector<int> numbers_org = numbers;
    vector<vector<int>> min_surface1 = minCountNumberSurface();
    rep (i, min_surface1.size()) {
      rep (j, min_surface1[i].size()) {
        numbers = numbers_org;
        switch (min_surface1[i][j]) {
          case 0:
            s();
            break;
          case 1:
            //nop
            break;
          case 2:
            w();
            s();
            break;
          case 3:
            e();
            s();
            break;
          case 4:
            n();
            n();
            break;
          case 5:
            n();
            break;
        }

        if (numbers[1] == other.numbers[0]) {
          other.s();
        } else if (numbers[1] == other.numbers[1]) {
          //nop
        } else if (numbers[1] == other.numbers[2]) {
          other.w();
          other.s();
        } else if (numbers[1] == other.numbers[3]) {
          other.e();
          other.s();
        } else if (numbers[1] == other.numbers[4]) {
          other.n();
          other.n();
        } else if (numbers[1] == other.numbers[5]) {
          other.n();
        }

        rep (i, 4) {
          if (numbers == other.numbers) {
            numbers = numbers_org;
            return true;
          }
          other.e();
        }
      }
    }
    numbers = numbers_org;
    return false;
  }
};

int main() {
  int n;
  cin >> n;
  vector<Dice> dices(n);
  rep (i, n) {
    vector<int> nums(6);
    rep (j, 6) {
      cin >> nums[j];
    }
    Dice d;
    d.numbers = nums;
    dices[i] = d;
  }

  rep (i, n-1) {
    rep2 (j, i+1, n) {
      if (dices[i] == dices[j]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}

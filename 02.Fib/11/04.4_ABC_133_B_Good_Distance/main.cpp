#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int N, D;
  cin >> N >> D;

  vector<vector<int>> X(N, vector<int>(D));
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < D; ++j) {
      cin >> X[i][j];
    }
  }

  int count = 0;

  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      int norm_sq = 0;

      for (int k = 0; k < D; ++k) {
        int diff = X[i][k] - X[j][k];
        norm_sq += diff * diff;
      }

      bool is_integer = false;
      for (int k = 0; k <= norm_sq; ++k) {
        if (k * k == norm_sq) {
          is_integer = true;
          break;
        }
        if (k * k > norm_sq) break;
      }

      if (is_integer) {
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}

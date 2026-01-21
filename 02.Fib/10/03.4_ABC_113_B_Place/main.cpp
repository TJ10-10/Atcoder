#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
  int N;
  double T, A;
  cin >> N >> T >> A;

  int best_index = 0;
  double min_diff = 1000000.0;

  for (int i = 1; i <= N; ++i) {
    double h;
    cin >> h;

    double current_temp = T - h * 0.006;

    double diff = abs(A - current_temp);

    if (diff < min_diff) {
      min_diff = diff;
      best_index = i;
    }
  }

  cout << best_index << endl;

  return 0;
}

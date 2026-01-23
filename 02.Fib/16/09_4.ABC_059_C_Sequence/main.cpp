#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long solve(int n, const vector<long long>& a, bool start_positive) {
  long long total_ops = 0;
  long long current_sum = 0;

  for (int i = 0; i < n; ++i) {
    current_sum += a[i];

    bool should_be_positive = (start_positive) ? (i % 2 == 0) : (i % 2 != 0);

    if (should_be_positive) {
      if (current_sum <= 0) {
        long long diff = 1 - current_sum;
        total_ops += diff;
        current_sum = 1;
      }
    } else {
      if (current_sum >= 0) {
        long long diff = current_sum - (-1);
        total_ops += diff;
        current_sum = -1;
      }
    }
  }

  return total_ops;
}

int main() {
  int n;
  cin >> n;
  vector<long long> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  long long ans1 = solve(n, a, true);
  long long ans2 = solve(n, a, false);

  cout << min(ans1, ans2) << endl;

  return 0;
}

#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
  int N, X;
  cin >> N >> X;

  vector<int> m(N);
  int sum_m = 0;
  int min_m = 1001;

  for (int i = 0; i < N; i++) {
    cin >> m[i];
    sum_m += m[i];
    min_m = min(min_m, m[i]);
  }

  int remaining_X = X - sum_m;

  int extra_donuts = remaining_X / min_m;

  cout << N + extra_donuts << endl;

  return 0;
}

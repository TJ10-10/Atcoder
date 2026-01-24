#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<long long> a(3 * N);
  for (int i = 0; i < 3 * N; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  long long total_strength = 0;

  for (int i = 0; i < N; i++) {
    total_strength += a[3 * N - 2 - 2 * i];
  }

  cout << total_strength << endl;

  return 0;
}

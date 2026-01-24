#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  vector<int> count(N + 1, 0);
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    count[a]++;
  }

  vector<int> frequencies;
  for (int i = 1; i <= N; i++) {
    if (count[i] > 0) {
      frequencies.push_back(count[i]);
    }
  }

  int current_kinds = frequencies.size();

  if (current_kinds <= K) {
    cout << 0 << endl;
    return 0;
  }

  sort(frequencies.begin(), frequencies.end());

  int ans = 0;
  int to_remove = current_kinds - K;
  for (int i = 0; i < to_remove; i++) {
    ans += frequencies[i];
  }

  cout << ans << endl;

  return 0;
}

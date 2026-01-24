#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> count(100005, 0);

  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;

    count[a]++;
    if (a > 0) count[a - 1]++;
    count[a + 1]++;
  }

  int max_count = 0;
  for (int i = 0; i < 100005; i++) {
    max_count = max(max_count, count[i]);
  }

  cout << max_count << endl;

  return 0;
}

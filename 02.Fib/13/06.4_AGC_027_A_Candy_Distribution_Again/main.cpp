#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  int N;
  long long x;
  cin >> N >> x;

  vector<long long> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int count = 0;
  for (int i = 0; i < N; i++) {
    if (x >= a[i]) {
      x -= a[i];
      count++;
    } else {
      x = 0;
      break;
    }
  }

  if (x > 0 && count == N) {
    count--;
  }

  cout << count << endl;

  return 0;
}

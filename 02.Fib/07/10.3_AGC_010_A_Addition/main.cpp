#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N;
  if (!(cin >> N)) return 0;

  int odd_count = 0;
  for (int i = 0; i < N; i++) {
    long long a;
    cin >> a;
    if (a % 2 != 0) {
      odd_count++;
    }
  }

  if (odd_count % 2 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}

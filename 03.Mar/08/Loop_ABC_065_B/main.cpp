#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> a(N + 1);
  for (int i = 1; i <= N; ++i) {
    cin >> a[i];
  }

  int current_button = 1;
  int count = 0;

  for (int i = 0; i < N; ++i) {
    if (current_button == 2) {
      cout << count << endl;
      return 0;
    }

    current_button = a[current_button];
    count++;
  }

  cout << -1 << endl;

  return 0;
}

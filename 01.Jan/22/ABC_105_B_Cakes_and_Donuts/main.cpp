# include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;

  bool found = false;

  for (int i = 0; i <= 25; i++) {
    for (int j = 0; j <= 15; j++) {
      if (4 * i + 7 * j == N) {
        found = true;
        break;
      }
    }
    if (found) break;
  }

  if (found) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}

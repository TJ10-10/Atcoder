#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct Info {
  long long x, y, h;
};

int main() {
  int N;
  cin >> N;

  vector<Info> data(N);
  int si = -1;
  for (int i = 0; i < N; i++) {
    cin >> data[i].x >> data[i].y >> data[i].h;
    if (data[i].h > 0) {
      si = i;
    }
  }

  for (int cx = 0; cx <= 100; cx++) {
    for (int cy = 0; cy <= 100; cy++) {
      long long H = data[si].h + abs(data[si].x - cx) + abs(data[si].y - cy);
      if (H < 1) continue;

      bool ok = true;
      for (int i = 0; i < N; i++) {
        long long expected_h = max(H - abs(data[i].x - cx) - abs(data[i].y - cy), 0LL);
        if (data[i].h != expected_h) {
          ok = false;
          break;
        }
      }
      if (ok) {
        cout << cx << " " << cy << " " << H << endl;
        return 0;
      }
    }
  }

  return 0;
}

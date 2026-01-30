#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
  int N;
  if (!(cin >> N)) return 0;

  struct Point {
    int x, y;
  };

  vector<Point> points(N);
  for (int i = 0; i < N; ++i) {
    cin >> points[i].x >> points[i].y;
  }

  double max_dist = 0.0;

  for (int i = 0; i < N; ++i) {
    for (int j = i + 1; j < N; ++j) {
      double dx = points[i].x - points[j].x;
      double dy = points[i].y - points[j].y;

      double dist = sqrt(dx * dx + dy * dy);

      if (dist > max_dist) {
        max_dist = dist;
      }
    }
  }

  cout << fixed << setprecision(10) << max_dist << endl;

  return 0;
}

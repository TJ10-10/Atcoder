#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> s(H);
  for (int i = 0; i < H; ++i) {
    cin >> s[i];
  }

  int dy[] = {0, 0, 1, -1};
  int dx[] = {1, -1, 0, 0};

  bool possible = true;

  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      if (s[i][j] == '#') {
        bool has_neighbor = false;

        for (int k = 0; k < 4; ++k) {
          int ni = i + dy[k];
          int nj = j + dx[k];

          if (ni >= 0 && ni < H && nj >= 0 && nj < W) {
            if (s[ni][nj] == '#') {
              has_neighbor = true;
              break;
            }
          }
        }

        if (!has_neighbor) {
          possible = false;
          break;
        }
      }
    }
    if (!possible) break;
  }

  if (possible) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}

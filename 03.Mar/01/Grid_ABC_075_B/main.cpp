#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  vector<string> S(H);
  for (int i = 0; i < H; i++) {
    cin >> S[i];
  }

  int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (S[i][j] == '.') {
        int bomb_count = 0;

        for (int d = 0; d < 8; d++) {
          int ni = i + dx[d];
          int nj = j + dy[d];

          if (ni >= 0 && ni < H && nj >= 0 && nj < W) {
            if (S[ni][nj] == '#') {
              bomb_count++;
            }
          }
        }
        S[i][j] = (char)('0' + bomb_count);
      }
    }
  }

  for (int i = 0; i < H; i++) {
    cout << S[i] << endl;
  }

  return 0;
}

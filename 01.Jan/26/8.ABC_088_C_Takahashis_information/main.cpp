# include <iostream>
# include <vector>
using namespace std;

int main() {
  int c[3][3];
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> c[i][j];
    }
  }

  bool ok = true;

  for (int j = 0; j < 2; j++) {
    int diff0 = c[0][j] - c[0][j+1];
    int diff1 = c[1][j] - c[1][j+1];
    int diff2 = c[2][j] - c[2][j+1];
    if (diff0 != diff1 | diff1 != diff2) ok = false;
  }

  for (int i = 0; i < 2; i++) {
    int diff0 = c[i][0] - c[i+1][0];
    int diff1 = c[i][1] - c[i+1][1];
    int diff2 = c[i][2] - c[i+1][2];
    if (diff0 != diff1 || diff1 != diff2) ok = false;
  }

  if (ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}

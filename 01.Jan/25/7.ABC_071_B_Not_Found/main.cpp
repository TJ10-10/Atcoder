# include <iostream>
# include <string>
# include <vector>
using namespace std;

int main() {
  string S;
  cin >> S;

  vector<bool> exists(26, false);

  for (char c : S) {
    exists[c - 'a'] = true;
  }

  for (int i = 0; i < 26; i++) {
    if (!exists[i]) {
      char ans = 'a' + i;
      cout << ans << endl;
      return 0;
    }
  }

  cout << "None" << endl;

  return 0;
}



#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  string s;
  cin >> s;

  int first_a = -1;
  int last_z = -1;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == 'A') {
      first_a = i;
      break;
    }
  }

  for (int i = s.length() - 1; i >= 0; i--) {
    if (s[i] == 'Z') {
      last_z = i;
      break;
    }
  }

  cout << last_z - first_a + 1 << endl;

  return 0;
}

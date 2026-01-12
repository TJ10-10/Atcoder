# include <iostream>
# include <string>
using namespace std;

int main() {
  string s;
  cin >> s;

  int counter = 0;

  for (int i = 0; i < 3; i++) {
    if (s[i] == 'o') {
      counter++;
    }
  }

  cout << 700 + (counter * 100) << endl;

  return 0;
}

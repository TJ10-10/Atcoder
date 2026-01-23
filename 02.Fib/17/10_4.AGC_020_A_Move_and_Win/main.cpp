#include <iostream>

using namespace std;

int main() {
  int N, A, B;
  if (!(cin >> N >> A >> B)) return 0;

  if ((B - A) % 2 == 0) {
    cout << "Alice" << endl;
  } else {
    cout << "Borys" << endl;
  }

  return 0;
}

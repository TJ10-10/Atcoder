#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  string S;
  cin >> S;

  int A = S[0] - '0';
  int B = S[1] - '0';
  int C = S[2] - '0';
  int D = S[3] - '0';

  for (int i = 0; i < (1 << 3); ++i) {
    int res = A;
    char op1 = '+', op2 = '+', op3 = '+';

    if (i & (1 << 0)) { res -= B; op1 = '-'; }
    else { res += B; }

    if (i & (1 << 1)) { res -= C; op2 = '-'; }
    else { res += C; }

    if (i & (1 << 2)) { res -= D; op3 = '-'; }
    else { res += D; }

    if (res == 7) {
      cout << A << op1 << B << op2 << C << op3 << D << "=7" << endl;
      return 0;
    }
  }

  return 0;
}

#include <iostream>
using namespace std;

int main() {
  int n, result = 0;
  bool sign = 0;
  cin >> n;

  if (n == 0) {
    cout << n << endl;
  }
  else if (n < 0) {
    sign = 1;
    n = -n;
  }

  while (n != 0) {
    result = result * 10 + (n % 10);
    n = n / 10;
  }

  if (sign) {
    cout << result * (-1) << endl;
  }
  else {
    cout << result << endl;
  }
}

//给定一个整数，请将该数各个位上数字反转得到一个新数。
//新数也应满足整数的常见形式，即除非给定的原数为零，
//否则反转后得到的新数的最高位数字不应为零（参见样例2）。

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

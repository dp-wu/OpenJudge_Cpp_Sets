/*
描述
给定两个正整数，求它们的最大公约数。
*/

#include <iostream>
using namespace std;

int gcd(int a, int b) {
  int temp;

  while (a % b != 0) {
    a = a % b;
    temp = a;
    a = b;
    b = temp;
  }
  return b;
}

int main() {
  int a, b, temp;
  cin >> a >> b;

  if (a == b) {
    cout << a << endl;
  }
  else {
    if (a < b) {
      temp = a;
      a = b;
      b = temp;
    }
    cout << gcd(a, b) << endl;
  }
}

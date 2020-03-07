#include <iostream>
using namespace std;

int main() {
  int n, m;
  int b7=0, b9=0;
  cin >> n;
  cout << n << endl;

  b10 = n;
  while (b10 != 0) {
    b9 = b9 * 10 + (b10 % 7);
    b10 = b10 / 7;
  }

  m = b9;
  while (m != 0) {
    b7 = b7 * 10 + (m % 10);
    m = m / 10;
  }

  cout << n << endl;
  cout << b7 << endl;
  cout << b9 << endl;
}

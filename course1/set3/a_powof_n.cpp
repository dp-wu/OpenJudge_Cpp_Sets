//给出一个整数a和一个正整数n，求乘方an。

#include <iostream>
using namespace std;

int main() {
    int a, n, result = 1;
    cin >> a >> n;

    while (n > 0) {
      result *= a;
      --n;
    }

    cout << result << endl;
}

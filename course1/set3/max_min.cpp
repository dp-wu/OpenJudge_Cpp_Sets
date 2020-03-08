//给定一个长度为n的非负整数序列，请计算序列的最大跨度值（最大跨度值 = 最大值减去最小值）。

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n, input_num, result;
    int maximum = 0, minimum = 10000;
    cin >> n;

    for (int i=1; i<=n; ++i) {
      cin >> input_num;
      if (input_num >= maximum) {
        maximum = input_num;
      }
      if (input_num <= minimum) {
        minimum = input_num;
      }
    }
    cout << maximum - minimum << endl;
}

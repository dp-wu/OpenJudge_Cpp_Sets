/*
描述
输出一个整数序列中与指定数字相同的数的个数。

输入
输入包含三行：
第一行为N，表示整数序列的长度(N <= 100)；
第二行为N个整数，整数之间以一个空格分开；
第三行包含一个整数，为指定的整数m。

输出
输出为N个数中与m相同的数的个数。
*/


#include <iostream>
using namespace std;

const int MAX_NUM = 100;

int main() {
  int a[MAX_NUM];
  int n, m, counter=0;
  cin >> n;

  for (int i=0; i<n; ++i) {
    cin >> a[i];
  }

  cin >> m;
  for (int j=0; j<n; ++j) {
    if (a[j] == m) {
      counter += 1;
    }
  }

  cout << counter << endl;
}

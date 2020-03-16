/* 头秃练习 */

#include <iostream>
using namespace std;

int bitManipulation1(int n, int m, int i) {
  // 在此处补充你的代码
  // 使得函数返回值为一个整数,该整数的第i位和m的第i位相同，其他位和n相同。
  return (((1<<i) & m) + ((~(1<<i)) & n));
}

int main() {
	int n, m, i, t;
	cin >> t;
	while (t--) {
		cin >> n >> m >> i;
		cout << bitManipulation1(n, m, i) << endl;
	}
	return 0;
}

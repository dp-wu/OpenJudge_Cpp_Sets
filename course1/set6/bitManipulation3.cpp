/* 该整数的左边i位是n的左边i位取反，其余位和n相同 */

#include <iostream>
using namespace std;

int bitManipulation3(int n, int i) {
  // 在此处补充你的代码
  // -1的机器码是111··1111；左移，右边补0；
  return (n ^ (-1 << (32 - i)));
}

int main() {
	int t, n, i;
	cin >> t;
	while (t--) {
		cin >> n >> i;
		cout << bitManipulation3(n, i) << endl;
	}
	return 0;
}

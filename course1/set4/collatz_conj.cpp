//所谓角谷猜想，是指对于任意一个正整数，如果是奇数，则乘3加1，如果是偶数，则除以2，
//得到的结果再按照上述规则重复处理，最终总能够得到1。
//如，假定初始整数为5，计算过程分别为16、8、4、2、1。
//程序要求输入一个整数，将经过处理得到1的过程输出来。

#include <iostream>
using namespace std;

int main() {
    long int n, temp;
    cin >> n;

    while (true) {
      if (n == 1) {
        cout << "End" << endl;
        break;
      }
      else if (n % 2){
        temp = n * 3 + 1;
        cout << n << "*3+1=" << temp << endl;
        n = temp;
        continue;
      }
      else {
        temp = n / 2;
        cout << n << "/2=" << temp << endl;
        n = temp;
        continue;
      }
    }
}

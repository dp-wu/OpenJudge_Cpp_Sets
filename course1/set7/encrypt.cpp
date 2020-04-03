/* 描述
在情报传递过程中，为了防止情报被截获，往往需要对情报用一定的方式加密，
简单的加密算法虽然不足以完全避免情报被破译，但仍然能防止情报被轻易的识别。
我们给出一种最简的的加密方法，对给定的一个字符串，把其中从a-y，
A-Y的字母用其后继字母替代，把z和Z用a和A替代，其他非字母字符不变，则可得到一个简单的加密字符串。
*/

#include <string>
#include <iostream>
using namespace std;


int main() {
  string a;
  getline(cin, a);

  for (int i=0; a[i]; ++i) {
    // translate into ascii number in decimal
    int iCode = a[i];

    if (iCode == 90 || iCode == 122) {
      a[i] = char(iCode-25);
    }
    else if (((iCode >= 65) && (iCode < 90)) || ((iCode >= 97) && (iCode < 122))) {
      a[i] = char(iCode + 1);
    }
  }

  cout << a << endl;
}
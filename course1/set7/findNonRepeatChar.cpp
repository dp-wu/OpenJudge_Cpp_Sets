//给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。

#include <iostream>
using namespace std;

int main() {
  char s[1000];
  cin.getline(s, sizeof(s));

  for (int i=0; s[i]; ++i) {
    for (int j=0; s[j]; ++j) {
      if ((i != j) && (s[i] == s[j])) {
        break;
      }
      if (s[j+1] == 0) {
        cout << s[i] << endl;
        return 0;
      }
    }
  }
  cout << "no" << endl;
  return 0;
}

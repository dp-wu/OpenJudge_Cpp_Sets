/* 输入一行字符，统计出其中数字字符的个数。 */

#include <iostream>
using namespace std;

int main() {
  int counter=0;
  char s[1000];
  cin.getline(s, sizeof(s));

  for (int i=0; s[i]; ++i) {
    if (s[i] >= 48 && s[i] <= 57) {
      ++counter;
    }
  }

  cout << counter << endl;
}

/*
输入1行句子（不多于200个单词，每个单词长度不超过100），
只包含字母、空格和逗号。单词由至少一个连续的字母构成，空格和逗号都是单词间的间隔。
试输出第1个最长的单词和第1个最短单词。
*/

#include <iostream>
using namespace std;

#include <string.h>

int main() {
  // initialize longest word and shortest word
  string maxChar="", minChar="aaaaaaaaaaaaaaaaaaaaaaaaaaaa";
  // initialize a 2-d char array to store the input
  char a[10000][50];

  for (int i=0; a[i]; ++i) {
    cin >> a[i];

    int inputLength = strlen(a[i]);
    int maxLength=maxChar.size();
    int minLength=minChar.size();

    //cout << "showing input: " << a[i] << "it's size is " << inputLength << endl;

    if (inputLength > maxLength) {
      maxChar = a[i];
      //cout << "updating max_len: " << maxChar << endl;
    }

    if (inputLength < minLength) {
      minChar = a[i];
      //cout << "updating min_len: " << minChar << endl;
    }

    if (cin.get() == '\n') {
      break;
    }
  }

  cout << maxChar << endl;
  cout << minChar << endl;
}

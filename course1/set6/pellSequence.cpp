/*
描述
Pell数列a1, a2, a3, ...的定义是这样的，a1 = 1, a2 = 2, ... , an = 2 * an − 1 + an - 2 (n > 2)。
给出一个正整数k，要求Pell数列的第k项模上32767是多少。

输入
第1行是测试数据的组数n，后面跟着n行输入。每组测试数据占1行，包括一个正整数k (1 ≤ k < 1000000)。
输出
n行，每行输出对应一个输入。输出应是一个非负整数。
*/

#include <iostream>
using namespace std;


long int Pell(long int an) {
  long int an_1 = 2;
  long int an_2 = 1;
  long int an_n;

  if (an <= 2) {
    return an;
  }

  else {
    for (long int i=2; i<an; ++i) {
      an_n = 2 * an_1 + an_2;
      an_2 = an_1 % 32767;
      an_1 = an_n % 32767;
    }
    return an_n % 32767;
  }
}

int main() {
  int inputNums;
  long int entry;
  long int k;
  cin >> inputNums;

  for (int n=0; n<inputNums; ++n) {
    cin >> entry;
    k = Pell(entry);
    cout << k << endl;
  }
}

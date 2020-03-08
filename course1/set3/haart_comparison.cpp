/*
描述
鸡尾酒疗法，原指“高效抗逆转录病毒治疗”（HAART），由美籍华裔科学家何大一于1996年提出，
是通过三种或三种以上的抗病毒药物联合使用来治疗艾滋病。该疗法的应用可以减少单一用药产生的抗药性，
最大限度地抑制病毒的复制，使被破坏的机体免疫功能部分甚至全部恢复，
从而延缓病程进展，延长患者生命，提高生活质量。人们在鸡尾酒疗法的基础上又提出了很多种改进的疗法。
为了验证这些治疗方法是否在疗效上比鸡尾酒疗法更好，可用通过临床对照实验的方式进行。
假设鸡尾酒疗法的有效率为x，新疗法的有效率为y，如果y-x大于5%，则效果更好，
如果x-y大于5%，则效果更差，否则称为效果差不多。下面给 出n组临床对照实验，
其中第一组采用鸡尾酒疗法，其他n-1组为各种不同的改进疗法。请写程序判定各种改进疗法效果如何。

输入
第一行为整数n（ 1 < n <= 20）；
其余n行每行两个整数，第一个整数是临床实验的总病例数(小于等于10000)，第二个疗效有效的病例数。
这n行数据中，第一行为鸡尾酒疗法的数据，其余各行为各种改进疗法的数据。
输出
有n-1行输出，分别表示对应改进疗法的效果：
如果效果更好，输出better；如果效果更差，输出worse；否则输出same
*/

#include <iostream>
using namespace std;

int main() {
    int n, haart_t, haart_e, alter_t, alter_e;
    double x = 0, y = 0;

    cin >> n;
    cin >> haart_t >> haart_e;
    x = (double) haart_e / haart_t;

    int a[n];

    for (int i = 0; i < n-1; ++i) {
      cin >> alter_t >> alter_e;
      y = (double) alter_e / alter_t;

      if (x - y > 0.05) {
        a[i] = -1;
      }
      else if (y - x > 0.05) {
        a[i] = 1;
      }
      else {
        a[i] = 0;
      }
    }

    for (int i = 0; i < n-1; ++i) {
      if (a[i] == -1) {
        cout << "worse" << endl;
      }
      else if (a[i] == 1) {
        cout << "better" << endl;
      }
      else if (a[i] == 0) {
        cout << "same" << endl;
      }
    }

}

/*
描述
某医院想统计一下某项疾病的获得与否与年龄是否有关，
需要对以前的诊断记录进行整理，按照0-18、19-35、36-60、61以上（含61）
四个年龄段统计的患病人数占总患病人数的比例。

输入
共2行，第一行为过往病人的数目n（0 < n <= 100)，第二行为每个病人患病时的年龄。
输出
按照0-18、19-35、36-60、61以上（含61）四个年龄段输出该段患病人数占总患病人数的比例，
以百分比的形式输出，精确到小数点后两位。每个年龄段占一行，共四行。
*/

#include <iomanip>
#include <iostream>
using namespace std;

const int MAX_NUM = 100;

int main() {
  int ages[MAX_NUM];
  int n;
  double g1=0, g2=0, g3=0, g4=0;

  cin >> n;
  for (int i=0; i<n; ++i) {
    cin >> ages[i];
    if (ages[i] <= 18 && ages[i] >= 0) {
      g1 += 1;
      continue;
    }
    else if (ages[i] <= 35 && ages[i] >= 19) {
      g2 += 1;
      continue;
    }
    else if (ages[i] <= 60 && ages[i] >= 36) {
      g3 += 1;
      continue;
    }
    else if (ages[i] > 60) {
      g4 += 1;
    }
  }

  cout << fixed << showpoint;
  cout << setprecision(2);
  cout << g1*100/n << "%" << endl;
  cout << g2*100/n << "%" << endl;
  cout << g3*100/n << "%" << endl;
  cout << g4*100/n << "%" << endl;
}

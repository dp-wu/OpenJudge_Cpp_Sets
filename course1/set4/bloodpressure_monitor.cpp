//监护室每小时测量一次病人的血压，
//若收缩压在90 - 140之间并且舒张压在60 - 90之间（包含端点值）则称之为正常，
//现给出某病人若干次测量的血压值，计算病人保持正常血压的最长小时数。

#include <iostream>
using namespace std;

int main() {
    int hours, counter = 0, max_counter = 0;
    int systolic, diastolic;
    cin >> hours;

    for (int i = 1; i <= hours; ++i) {
      cin >> systolic >> diastolic;

      if ((systolic <= 140 && systolic >= 90) && (diastolic <= 90 && diastolic >= 60)) {
        counter += 1;
        if (counter >= max_counter) {
          max_counter = counter;
        }
        continue;
      }
      else {
        counter = 0;
        continue;
      }
    }

    cout << max_counter << endl;
}

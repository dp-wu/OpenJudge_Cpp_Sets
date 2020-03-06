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

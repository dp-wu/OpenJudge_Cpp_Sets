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

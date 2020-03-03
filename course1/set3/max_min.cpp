#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int n, input_num, result;
    int maximum = 0, minimum = 10000;
    cin >> n;

    for (int i=1; i<=n; ++i) {
      cin >> input_num;
      if (input_num >= maximum) {
        maximum = input_num;
      }
      if (input_num <= minimum) {
        minimum = input_num;
      }
    }
    cout << maximum - minimum << endl;
}

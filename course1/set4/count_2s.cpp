#include <iostream>
using namespace std;

int main() {
  int L, R;
  int temp, counter = 0;
  cin >> L >> R;

  for (int i=L; i <= R; ++i) {
    for (int j=i; j>0; j/=10) {
      if (j % 10 == 2) {
        ++counter;
      }
    }
  }
  cout << counter << endl;
}

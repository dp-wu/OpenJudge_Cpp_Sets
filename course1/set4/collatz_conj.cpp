#include <iostream>
using namespace std;

int main() {
    long int n, temp;
    cin >> n;

    while (true) {
      if (n == 1) {
        cout << "End" << endl;
        break;
      }
      else if (n % 2){
        temp = n * 3 + 1;
        cout << n << "*3+1=" << temp << endl;
        n = temp;
        continue;
      }
      else {
        temp = n / 2;
        cout << n << "/2=" << temp << endl;
        n = temp;
        continue;
      }
    }
}

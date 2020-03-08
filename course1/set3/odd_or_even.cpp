//给定一个整数，判断该数是奇数还是偶数。

#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
 
    if (a % 2) {
        cout << "odd" << endl;
    }
    else {
        cout << "even" << endl;
    }
}

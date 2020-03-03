#include <iostream>
using namespace std;

int main() {
    int n, x, y, eaten;
    cin >> n >> x >> y;

    if (y % x) {
        eaten = y / x  + 1;
    else {
        eaten = y / x;
    }
    
    if (eaten >= n) {
        cout << "0" << endl;
    }
    else {
        cout << n - eaten << endl;
    }
}

#include <iostream>
using namespace std;

int main() {
    double x_up = 1, x_low = -1, y_up = 1, y_low = -1;
    double x, y;
    cin >> x >> y;

    if (x <= x_up && x >= x_low) {
        if (y <= y_up && y >= y_low) {
            cout << "yes" << endl;
        }
        else {
        cout << "no" << endl;
        }
    }
    else {
        cout << "no" << endl;
    }
}

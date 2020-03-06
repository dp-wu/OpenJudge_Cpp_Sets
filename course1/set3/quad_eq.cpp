#include <iomanip>
#include <iostream>
using namespace std;

#include <cmath>

const double EPS = 1e-7;

int main() {
    double a, b, c, fac, bsqr, r, i, x1, x2;
    cin >> a >> b >> c;

    fac = 4 * a * c;
    bsqr = pow(b, 2.0);

    cout.setf(ios::fixed|ios::showpoint);
    cout << setprecision(5);

    if (abs(bsqr - fac) < EPS) {
        x1 = (-b + sqrt(bsqr-fac))/(2*a);
        cout << "x1=x2=" << x1 << endl;
    }
    else if (bsqr > fac) {
        x1 = (-b + sqrt(bsqr-fac))/(2*a);
        x2 = (-b - sqrt(bsqr-fac))/(2*a);
        cout << "x1=" << x1 << ";x2=" << x2 << endl;
    }
    else if (bsqr < fac) {
        r = -b / (2*a);
        i = sqrt(fac-bsqr) / (2*a);

        if (abs(r) <= EPS) {
          r = 0;
        }

        cout << "x1=" << r << "+" << i << "i;" << "x2=" << r << "-" << i << "i" << endl;
    }
}

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double r, v;

    scanf("%lf", &r);
    v = (4.0/3.0) * 3.14 * pow(r, 3);
    printf("%.2f", v);
}

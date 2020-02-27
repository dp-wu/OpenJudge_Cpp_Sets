#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int h, r, num;
    const int required = 20 * 1000;
    const double pi = 3.14159;

    scanf("%d%d", &h, &r);
    num = (required / (pi * pow(r, 2) * h)) + 1;
    printf("%d", num);
}

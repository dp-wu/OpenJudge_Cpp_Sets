//一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，
//底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。

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

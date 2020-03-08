//对于半径为r的球，其体积的计算公式为V=4/3*πr3，这里取π= 3.14。
//现给定r，求V。

#include <iostream>
#include <cmath>
using namespace std;


int main() {
    double r, v;

    scanf("%lf", &r);
    v = (4.0/3.0) * 3.14 * pow(r, 3);
    printf("%.2f", v);
}

//读入一个双精度浮点数，保留12位小数，输出这个浮点数。
#include <iostream>
using namespace std;

int main() {
    double a;
    scanf("%lf", &a);
    printf("%.12f", a);
}

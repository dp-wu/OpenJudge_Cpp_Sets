//分别定义int，short类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。
//分别定义float，double类型的变量各一个，并依次输出它们的存储空间大小（单位：字节）。

#include <stdio.h>


int main() {
    int a;
    short b;
    printf("%d %d", sizeof(a), sizeof(b));
}

/*
#include <stdio.h>


int main() {
    float a;
    double b;
    printf("%d %d", sizeof(a), sizeof(b));
}
*/

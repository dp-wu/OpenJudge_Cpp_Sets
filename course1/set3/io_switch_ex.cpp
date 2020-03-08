//一个最简单的计算器，支持+, -, *, / 四种运算。
//仅需考虑输入输出为整数的情况，数据和运算结果不会超过int表示的范围。

#include <iostream>
using namespace std;

int main() {
    int n1, n2, result;
    char op;
    cin >> n1 >> n2 >> op;

    switch (op) {
        case '*':
            cout << n1 * n2 << endl;
            break;
        case '/':
            if (n2 == 0) {
                cout << "Divided by zero!" << endl;
            }
            else {
                cout << n1 / n2 << endl;
            }
            break;
        case '+':
            cout << n1 + n2 << endl;
            break;
        case '-':
            cout << n1 - n2 << endl;
            break;
        default:
            cout << "Invalid operator!" << endl;
    }
}

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

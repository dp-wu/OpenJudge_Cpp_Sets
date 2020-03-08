//有一个正方形，四个角的坐标（x,y)分别是（1，-1），（1，1），（-1，-1），（-1，1），
//x是横轴，y是纵轴。写一个程序，判断一个给定的点是否在这个正方形内（包括正方形边界）。

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

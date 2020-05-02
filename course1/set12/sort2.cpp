#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct Point {
    int x;
    int y;
};
// 在此处补充你的代码

struct Rule1 {
    bool operator()(const int & a1, const int & a2) const {
        if (a1 % 10 == a2 % 10) return a1 > a2;
        else return a1 % 10 < a2 % 10;
    }
};

struct Rule2 {
    bool operator()(const Point & a1, const Point & a2) const {
        const double EPS = 1e-5;
        double d1 = sqrt((pow(a1.x,2)+pow(a1.y, 2)));
        double d2 = sqrt((pow(a2.x,2)+pow(a2.y, 2)));
        
        if (d1-d2 <= EPS) {
            if (a1.x == a2.x) return a1.y < a2.y;
            else return a1.x < a2.x;
        }
        else return d1 < d2;
    }
};

int main() {
    int a[8] = {6,5,55,23,3,9,87,10 };
    sort(a,a+8,Rule1());
    for(int i = 0;i < 8; ++i)
        cout << a[i] << "," ;
    cout << endl;
    Point ps[8] = {{1,0},{0,1},{0,-1},{-1,0},{1,-1},{1,1},{2,0},{-2,0} } ;
    sort(ps,ps+8,Rule2());
    for(int i = 0;i < 8; ++i)
        cout << "(" << ps[i].x << "," << ps[i].y << ")";
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // I think there are infinitely many solutions for this question,
    // as long as to set the first element as NUll, and make sure the 3rd, 4th elements has enough length
    int * a[] = {NULL, new int[1], new int[3], new int[6]};
    
    *a[2] = 123;
    a[3][5] = 456;
    if(! a[0] ) {
        cout << * a[2] << "," << a[3][5];
    }
    return 0;
}

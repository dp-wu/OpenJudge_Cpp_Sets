/* I'm not fully understood what's going here,
I "figured" out the solution by looking into this article:
https://www.runoob.com/cplusplus/cpp-this-pointer.html
*/

#include <iostream>
using namespace std;

struct A
{
    int v;
    A(int vv):v(vv) { }
    // 在此处补充你的代码
    const A * getPointer() const{
        return this;
    }
    
};

int main()
{
    const A a(10);
    const A * p = a.getPointer();
    cout << p->v << endl;
    return 0;
}

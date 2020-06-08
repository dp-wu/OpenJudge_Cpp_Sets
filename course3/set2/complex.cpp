/*
// while using VS 2019, I have to use strcpy_c and strtok_s.
// The problem is that strtok_s takes 3-4 parameters, but strtok takes 2;
// submitting this code on OJ will get compile error (ughhh!!!!!)
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;


class Complex {
private:
    double r, i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
    // 在此处补充你的代码
    Complex() {};
    Complex(const char s[]) {
        char c[100];
        strcpy_s(c, s);
        char* real;
        char* imagine;
        char* next_token1, * next_token2;
        real = strtok_s(c, "+", &next_token1);
        imagine = strtok_s(next_token1, "+", &next_token2);

        r = atof(real);
        i = atof(imagine);
    }
    ~Complex() {};
};

int main() {
    Complex a;
    a = "3+4i"; 
    a.Print();
    a = "5+6i"; 
    a.Print();
    return 0;
}
*/

// The following code will pass OJ test
// Online compiler:
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;


class Complex {
private:
    double r, i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
    // 在此处补充你的代码
    Complex() {};
    Complex(const char s[]) {
        char c[100];
        strcpy(c, s);
        char* real;
        char* imagine;
        real = strtok(c, "+");
        imagine = strtok(NULL, "+");

        r = atof(real);
        i = atof(imagine);
    }
    ~Complex() {};
};

int main() {
    Complex a;
    a = "3+4i"; 
    a.Print();
    a = "5+6i"; 
    a.Print();
    return 0;
}

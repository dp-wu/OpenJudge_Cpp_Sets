// sort arrays of any type

#include <iostream>
using namespace std;

struct A {
    int nouse1;
    int nouse2;
    int n;
};

//在此处补充你的代码
void mysort(void * lst, int numInput, int typeSize, int f(const void * e1,const void * e2)) {
    // cast anytype into a char array
    char *inputList = (char *) lst;
    char temp;
    
    int arrayLen = numInput * typeSize;
    // loop through each element of the char array
    for (int i=typeSize; i<arrayLen; i+=typeSize) {
        for (int j=i; j>0; j-=typeSize) {
            char *first = inputList+j;
            char *second = inputList+j-typeSize;
            if (f(first, second) < 0) {
                for (int k=0; k<typeSize; ++k) {
                    temp = *(first+k);
                    *(first+k) = *(second+k);
                    *(second+k) = temp;
                }
            }
        }
    }
}


int MyCompare1( const void * e1,const void * e2) {
    int * p1 = (int * ) e1;
    int * p2 = (int * ) e2;
    return * p1 - * p2;
}

int MyCompare2( const void * e1,const void * e2) {
    int * p1 = (int * ) e1;
    int * p2 = (int * ) e2;
    if( (* p1 %10) - (* p2 % 10))
        return (* p1 %10) - (* p2 % 10);
    else
        return * p1 - * p2;
}

int MyCompare3( const void * e1,const void * e2) {
    A * p1 = (A*) e1;
    A * p2 = (A*) e2;
    return p1->n - p2->n;
}


int a[20];
A b[20];

int main () {
    int n;
    while(cin >> n) {
        for(int i = 0;i < n; ++i) {
            cin >> a[i];
            b[i].n = a[i];
        }
        mysort(a,n,sizeof(int),MyCompare1);
        cout << "=========1st answer" << endl;
        for(int i = 0;i < n; ++i)
            cout << a[i] << "," ;
        cout << endl;
        cout << endl;
        cout << "=========2nd answer" << endl;
        mysort(a,n,sizeof(int),MyCompare2);
        for(int i = 0;i < n; ++i)
            cout << a[i] << "," ;
        cout << endl;
        cout << endl;
        cout << "=========3rd answer" << endl;
        mysort(b,n,sizeof(A),MyCompare3);
        for(int i = 0;i < n; ++i)
            cout << b[i].n << "," ;
        cout << endl;
        cout << endl;
    }
    return 0;
}

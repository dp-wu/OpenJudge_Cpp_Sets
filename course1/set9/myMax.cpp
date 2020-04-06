#include <iostream>
using namespace std;

// 在此处补充你的代码
void *MyMax(void * lst, int size, int length, int (*f)(void*, void*)) {
    int *temp = (int *) lst;
    int *max = temp;
    int compare;
    
    for (int i=1;i<length;++i) {
        compare = f(max, temp+i);
        if (compare < 0) {
            max = temp + i;
        }
    }
    return max;
}

int Compare1(void * n1,void * n2) {
    int * p1 = (int * )n1;
    int * p2 = (int * )n2;
    return ((*p1)%10) - ((*p2)%10);
}

int Compare2(void * n1,void * n2) {
    int * p1 = (int * )n1;
    int * p2 = (int * )n2;
    return *p1 - *p2;
}

#define eps 1e-6
int Compare3(void * n1,void * n2) {
    float * p1 = (float * )n1;
    float * p2 = (float * )n2;
    if ( * p1 - * p2 > eps)
        return 1;
    else if(* p2 - * p1 > eps)
        return -1;
    else
        return 0;
}

int main() {
    int t;
    int a[10];
    float d[10];
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for (int i = 0;i < n; ++i)
            cin >> a[i];
        for (int i = 0;i < n; ++i)
            cin >> d[i];
        int * p = (int *) MyMax(a,sizeof(int),n,Compare1);
        cout << * p << endl;
        cout << endl;
        p = (int *) MyMax(a,sizeof(int),n,Compare2);
        cout << * p << endl;
        cout << endl;
        float * pd = (float * ) MyMax(d,sizeof(float),n,Compare3);
        cout << * pd << endl;
        cout << endl;
    }
    return 0;
}
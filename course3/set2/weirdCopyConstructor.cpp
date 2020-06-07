#include <iostream>
using namespace std;
class Sample {
public:
	int v;
	// 在此处补充你的代码
	Sample() {
		//cout << "empty contructor called" << endl;
	};
	Sample(int i) {
		v = i;
		//cout << "v=" << v << " constructor 1 called" << endl;
	}
	Sample(const Sample &i) {
		v = i.v + 2;
		//cout << "v=" << v << " constructor 2 called" << endl;
	}
};
void PrintAndDouble(Sample o)
{
	cout << o.v;
	cout << endl;
}
int main()
{
	Sample a(5);
	Sample b = a;
	PrintAndDouble(b);
	Sample c = 20;
	PrintAndDouble(c);
	Sample d;
	d = a;
	cout << d.v;
	return 0;
}


/* OUTPUT
v=5 constructor 1 called
v=7 constructor 2 called
v=9 constructor 2 called
9
v=20 constructor 1 called
v=22 constructor 2 called
22
empty contructor called
5
/

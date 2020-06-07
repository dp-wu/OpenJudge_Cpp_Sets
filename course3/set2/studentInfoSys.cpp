/* I was scratching my head about how to handle the commas from the input and couldnt figure out a good solution.
then I saw this person's code which helped me to solve the problem in a very simple way. I think it's very brilliant.
https://blog.csdn.net/Code_7900x/article/details/79946808 */

#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
	char name[21], d;
	int age, id, score[4], total;
	double avg;
public:
	void input() {
		total = 0;
		cin.getline(name, 21, ',');
		cin >> age >> d >> id;
		for (int i = 0; i < 4; ++i) {
			cin >> d >> score[i];
			total += score[i];
		}
	}
	double calculate() {
		avg = total / 4.0;
		return avg;
	}
	void output() {
		cout << name << "," << age << "," << id << "," << avg << endl;
	}
};

int main() {
	Student student;        // 定义类的对象
	student.input();        // 输入数据
	student.calculate();    // 计算平均成绩
	student.output();       // 输出数据
}

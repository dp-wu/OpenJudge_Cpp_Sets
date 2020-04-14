/*
Instead of doing it traditionally like the previous two exercises:
read in the whole list -> sort the whole list -> print out the whole list;
I'm trying to do it in a dynamic way:
read in each line -> sort it on-spot -> print out the whole list;

003 病人排队

描述
病人登记看病，编写一个程序，将登记的病人按照以下原则排出看病的先后顺序：
1. 老年人（年龄 >= 60岁）比非老年人优先看病。
2. 老年人按年龄从大到小的顺序看病，年龄相同的按登记的先后顺序排序。
3. 非老年人按登记的先后顺序看病。
输入
第1行，输入一个小于100的正整数，表示病人的个数；
后面按照病人登记的先后顺序，每行输入一个病人的信息，包括：一个长度小于10的字符串表示病人的ID（每个病人的ID各不相同且只含数字和字母），一个整数表示病人的年龄，中间用单个空格隔开。
输出
按排好的看病顺序输出病人的ID，每行一个。
*/

#include <iostream>
using namespace std;

#include <cstring>


struct patients {
    char id[10];
    int age;
};

void swapOrder(patients *p1, patients *p2) {
    patients temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


int main() {
    int nPatients, pter=0;
    cin >> nPatients;
    
    // cout << "\nOutput:" << endl;
    int counter = nPatients;
    patients pList[nPatients];
    
    while (counter > 0) {
        cin >> pList[pter].id >> pList[pter].age;
        
        if (pList[pter].age < 60) {
            // swap
            for (int j=pter; j<nPatients-1; ++j) {
                swapOrder(&pList[j], &pList[j+1]);
            }
        }
        else if (pter == 0) {
            counter -=1;
            pter += 1;
            continue;
        }
        else {
            // compare and swap
            for (int i=pter; i>0; --i) {
                if (pList[i].age > pList[i-1].age) {
                    swapOrder(&pList[i], &pList[i-1]);
                }
            }
            pter += 1;
        }
        counter -= 1;
    }
    
    for (int m=0; m<nPatients; ++m) {
        cout << pList[m].id << endl;
    }
}

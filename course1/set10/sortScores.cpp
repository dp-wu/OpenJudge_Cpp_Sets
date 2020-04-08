/* 
Implemented with insertion sort
*/


#include <iostream>
using namespace std;

#include <cstring>


struct student {
    char name[20];
    int score;
};

int compare(void *a, void *b) {
    student *s1 = (student *) a;
    student *s2 = (student *) b;
    
    if (s1->score > s2->score) return 1;
    else if (s1->score < s2->score) return -1;
    else {
        if (strcmp(s1->name, s2->name) < 0) return 1;
        else if (strcmp(s1->name, s2->name) > 0) return -1;
        else return 0;
    }
}

void swap(void *a, void *b) {
    char *ss1 = (char *) a;
    char *ss2 = (char *) b;
    char temp[sizeof(student)];
    
    for (int i=0; i<sizeof(student); ++i) {
        temp[i] = *(ss1+i);
        *(ss1+i) = *(ss2+i);
        *(ss2+i) = temp[i];
    }
}

int main() {
    int num;
    cin >> num;

    student studentInfo[num];
    cin >> studentInfo[0].name >> studentInfo[0].score;
    
    for (int i=1; i<num; ++i) {
        cin >> studentInfo[i].name >> studentInfo[i].score;
        
        for (int j=i; j>0; --j) {
            if (compare(&studentInfo[j], &studentInfo[j-1]) > 0) {
                swap(&studentInfo[j], &studentInfo[j-1]);
            }
            else break;
        }
    }
    
    for (int k=0; k<num; ++k) {
        cout << studentInfo[k].name << " " << studentInfo[k].score << endl;
    }
}

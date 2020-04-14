/*
Instead of doing it traditionally like the previous two exercises:
read in the whole list -> sort the whole list -> print out the whole list;

I'm trying to do it in a dynamic way:
read in each line -> sort it on-spot -> print out the whole list;
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

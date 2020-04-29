/* 
//First attemp failed, it works with one sample test case but
//generates compile error when run in oj.
//I couldn't figure out which line is causing it. 
//but i'm guessing it's caused by the very large array 'barn'.

#include <iostream>
using namespace std;


int barn[1000000001]={0};

int main() {
    int N, C, smallest, largest, step, temp, counter, bestStep=0;
    scanf("%d%d", &N, &C);
    
    for (int i=0; i<N; ++i) {
        scanf("%d", &barn[i]);
        if (i>=1) {
            for (int k=i; k>0; --k) {
                if (barn[k] < barn[k-1]) {
                    temp = barn[k];
                    barn[k] = barn[k-1];
                    barn[k-1] = temp;
                }
            }
        }
    }
    
//    for (int t=0; t<N; ++t) printf("%d ", barn[t]);
//    printf("\n");
    
    smallest = barn[0];
    largest = barn[N-1];
    step = 0;
    
    while (smallest < largest) {
        step = smallest + (largest-smallest)/2;
        
        temp = 0;
        counter = 0;
        for (int j=0; j<N; ++j) {
            if (j>=1) {
                if (temp+barn[j]-barn[j-1] > step) {
                    temp = 0;
                    counter++;
                }
                temp += barn[j]-barn[j-1];
            }
            else temp=barn[j];
        }
        
        //printf("smallest:%d largest:%d step:%d counter:%d\n", smallest, largest, step, counter);
        
        if (counter >= C) {
            bestStep = step;
            smallest = step+1;
        }
        else largest = step-1;
    }
    printf("%d\n", bestStep);
}

*/

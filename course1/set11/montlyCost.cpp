/* 
I couldn't solve this problem independently.
My original approach is to create an array called fajo[M],
which is going to take notes of for each montly cost cap how many costs can fit in to each slot.
I still think it should work, but I couldn't get the lower bound right.
After several hours of struggle I gave up and took a look at this answer:
https://www.cnblogs.com/Orzst/p/11416125.html
Good news is that my original approach wasn't off-track too much,
bad thing is ever since I started to learn programming I always get the lower/upper boundaries wrong.
:( some people just never learn, pathetic.
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int N, M;
    cin >> N >> M;
    int spend[N];
    int step=0, low=0, high=0, bestStep=0, counter, fajo=0;
    
    for (int i=0; i<N; ++i) {
        cin >> spend[i];
        bestStep += spend[i];
        if (spend[i] >= low) low = spend[i];
    }
    
    high = bestStep;
    
    while (low <= high) {
        counter=1;
        fajo=0;
        step = low + (high-low)/2;
        
        //cout << "high, low, step = " << high << " " << low << " " << step << endl;
        for (int i=0; i<N; ++i) {
            if (fajo+spend[i] > step) {
                fajo = 0;
                ++counter;
            }
            fajo += spend[i];
            //cout << "   i=" << i << " spend[i]=" << spend[i] << " counter=" << counter << " fajo=" << fajo << endl;
        }
        
        if (counter > M) low = step+1;
        else {
            if (step < bestStep) bestStep = step;
            high = step-1;
        }
    }
    cout << bestStep << endl;
    return 0;
}



/* test cases:
first:
10 3
1
1
1
10000
1
1
1
1
1
1
Answer: 10000

second:
7 5
100
400
300
100
500
101
400
Answer:500

third:
this test case has N=10000 so i'm not going to past it here.
the problem with it is that I could'nt not test run it c=on my local machine,
so technically speaking not very helpful unless use an online compiler.
*/

/* 
The following code is incorrect, 
I got it wrong by using the radius directly instead of using the squared radius.
I realized it after seeing this person's code:
https://www.cnblogs.com/Orzst/p/11416125.html

Then I fixed my code according to it.
*/
/*
#include <iostream>
#include <iomanip>
using namespace std;

int pies[10010];
int solve(int plist[], double testR, int numPies, int numFrs);


int main() {
    int N, F, M=0;
    cin >> N >> F; ++F;

    for (int i=0; i<N; ++i) {
        cin >> pies[i];
        if (pies[i]>=M) M = pies[i];
    } // get input data and find the largest pie
  
    double min = 0, max = M, mid;
    double r2=0, R2=0;

    while (max-min>1e-5) {
        mid = (min + max) / 2;
        r2 = mid * mid;
        if (solve(pies, r2, N, F)) {
            if (R2<r2) R2 = r2;
            min = mid;
        }
        else max = mid;
    } // binary search

    cout << fixed << setprecision(3) << R2 * 3.141592653589 << endl;
} // main


int solve(int pList[], double testR, int numPies, int numFrs) {
    int numPieces=0;
    double r = 0;

    for (int i=0; i<numPies; ++i) {
        r = pList[i];
        numPieces += (int) ((r*r) / testR);
    }
    if (numPieces >= numFrs) return 1;
    else return 0;
}
*/


// the following code is working as expect after fixing the squared problem.
// note that multiplication of PI is only needed in the end of the code in this specific case.
#include <iostream>
#include <iomanip>
using namespace std;

const double Pi = 3.141592653589;
int pies[10010];

int solve(int pList[], double tMid, int numPies, int numFrs) {
    int numPieces=0;
    for (int i=0; i<numPies; ++i) {
        numPieces += (int) ((pList[i] * pList[i]) / tMid);
    }
    if (numPieces >= numFrs) return 1;
    else return 0;
}

int main() {
    int N, F;
    double M=0;
    cin >> N >> F; ++F;

    for (int i=0; i<N; ++i) {
        cin >> pies[i];
        M += pies[i] * pies[i];
    } // get input data and find the largest pie

    double min = 0, max = (M/F), mid;
    double R2=0;

    while (max-min>1e-5) {
        mid = min + (max-min) / 2;
        if (solve(pies, mid, N, F)) {
            if (mid >= R2) R2 = mid;
            min = mid;
        }
        else max = mid;
    } // binary search

    cout << fixed << setprecision(3) << R2 * Pi << endl;
} // main

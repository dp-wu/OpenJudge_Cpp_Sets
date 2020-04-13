/* 
My code looks pretty tedious. 
The four parallel for-loops are stupid, there should be a better way to code this.
I'll learn from other people's code if I find a good one and update my file. 
*/

#include <iostream>
using namespace std;

#include <cstring>


struct candidate {
    int candId;
    int candScore;
};

candidate * findMax(candidate *lst, int size) {
    candidate * max = lst;
    for (int i=0; i<size; ++i) {
        if (lst[i].candScore == max->candScore) {
            if (lst[i].candId < max->candId) max = &lst[i];
        }
        else if (lst[i].candScore > max->candScore) max = &lst[i];
    }
    return max;
}

void swapOrder(candidate *firstCand, candidate *maxCand) {
    candidate temp = *firstCand;
    *firstCand = *maxCand;
    *maxCand = temp;
}

int main() {
    int numApplicants, numCandidates;
    int passingScore, counter=0;
    cin >> numApplicants >> numCandidates;
    
    // initiate the main candidate list
    candidate candList[numApplicants];
    // initiate a pointer for further use
    candidate *tempMax = candList;
    
    for (int i=0; i<numApplicants; ++i) {
        cin >> candList[i].candId >> candList[i].candScore;
    }
    
    for (int j=0; j<numApplicants; ++j) {
        // find the max score in the sublist
        tempMax = findMax(&candList[j], (numApplicants-j));
        // move the max to the beginning of the sublist
        swapOrder(&candList[j], tempMax);
    }
    
    passingScore = candList[(numCandidates-1) * 150 / 100].candScore;
    
    for (int k=0; k<numApplicants; ++k) {
        if (candList[k].candScore >= passingScore) {
            counter += 1;
        }
    }
    
    cout << passingScore << " " << counter << endl;
    
    for (int m=0; m<counter; ++m) {
        cout << candList[m].candId << " " << candList[m].candScore << endl;
    }
}

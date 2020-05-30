#include <stdio.h>
#include <ctype.h>


struct Chars {
    char c;
    int counter;
};

int main() {
    int n=1001, ind=0;
    char cLst[n], temp;
    scanf("%s", cLst);
    
    struct Chars cDict[n];
    cDict[0].c = toupper(cLst[0]);
    cDict[0].counter = 1;
    
    for (int i=1; i<n; ++i) {
        if (cLst[i] == '\0') break;
        else {
            temp = toupper(cLst[i]);
            if (cDict[ind].c == temp) ++cDict[ind].counter;
            else {
                ++ind;
                cDict[ind].c = temp;
                cDict[ind].counter = 1;
            }
        }
    }
    
    for (int i=0; i<=ind; ++i) {
        printf("(%c,%d)", cDict[i].c, cDict[i].counter);
    }
    
    return 0;
}

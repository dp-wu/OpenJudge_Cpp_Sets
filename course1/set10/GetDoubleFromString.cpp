/* 
My code wan't working properly at the beginning,
got my problem fixed according to this post:
https://www.cnblogs.com/Orzst/p/11416125.html
*/

#include <iostream>
#include <iomanip>
using namespace std;

double GetDoubleFromString(char * str) {
    // 在此处补充你的代码
    static char * start;
    if (str) start = str;

    //skip non-int starting characters
    //originally my if-statement is outside of the for-loop, 
    //similar to the code in Prof.Guo's lecture slides
    //which causing the code printing floats from previous input.
    //got it fixed when i saw orzst's code.
    for (; (*start<'0')||(*start>'9'); ++start) {
        if (*start == '\0') return NULL;
    }
    
    double divisor = 1.0;
    double d=0.0;
    bool hasFP = false;

    for (; (*start=='.')||((*start>='0')&&(*start<='9')); ++start) {
        if (*start=='.') {
            hasFP = true;
            continue;
        }
        d = d * 10 + (*start - '0');
        if (hasFP) divisor *= 10;
    }
    
    d/=divisor;

    return d;
}

int main() {
    char line[300];
    while(cin.getline(line,280)) {
        double n;
        n = GetDoubleFromString(line);
        while( n > 0) {
            cout << fixed << setprecision(6) << n << endl;
            n = GetDoubleFromString(NULL);
        }
    }
}

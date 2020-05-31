#include <stdio.h>

int main() {
    int N, K, counter; // N网线库存数量，K网线数量需求
    scanf("%d%d", &N, &K);
    
    int cables[N], minLen=0, maxLen=0, tempLen;
    double temp;
    
    for (int i=0; i<N; ++i) {
        scanf("%lf", &temp);
        cables[i] = temp * 100;
        if (cables[i]>maxLen) maxLen=cables[i];
    }
    maxLen += 1;
    
    while (maxLen > minLen+1) {
        counter = 0;
        // tempLen = minLen + (maxLen-minLen)/2;
        tempLen = (maxLen+minLen)/2;
        
        for (int i=0; i<N; ++i) {
            counter += cables[i]/tempLen;
        }
        //printf("minLen=%d, maxLen=%d, tempLen=%d, counter=%d\n", minLen, maxLen, tempLen, counter);
        if (counter >= K) minLen = tempLen;
        else maxLen = tempLen;
    }
    
    printf("%.2lf", minLen/100.00);
    
    return 0;
}

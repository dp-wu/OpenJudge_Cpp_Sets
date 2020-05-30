#include <stdio.h>

int main() {
    double N, y1, y2, y3;
    scanf("%lf", &N);
    
    y1 = 2.5-N;
    y2 = 2 - 1.5 * (N-3) * (N-3);
    y3 = N/2 - 1.5;
    
    if (N >= 0 && N < 5) printf("%.3f\n", y1);
    else if (N >= 5 && N < 10) printf("%.3f\n", y2);
    else if (N >= 10 && N < 20) printf("%.3f\n", y3);
    else printf("error");
    
    return 0;
}

#include <stdio.h>

double recur(int num, double p, double q, double sum) {
    if (num == 0) return sum;
    else {
        sum += q / p;
        return recur(--num, q, q+p, sum);
    }
}


int main() {
    double result=0;
    int n, p0=1, q0=2;
    scanf("%d", &n);
    
    result = recur(n, p0, q0, result);
    printf("%.4f\n", result);
    
    return 0;
}

#include <stdio.h>

double nfact(int n, double result) {
    if (n==1) return result;
    
    result *= n;
    --n;
    return nfact(n, result);
}

int main() {
    int n;
    double e=1, res=0;
    scanf("%d", &n);
    
    while (n>0) {
        res = nfact(n, 1);
        e += 1/res;
        --n;
    }
    
    printf("%.10f", e);
}

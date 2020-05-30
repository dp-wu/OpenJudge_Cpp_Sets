#include <stdio.h>


int main() {
    int n;
    double x, result=0;
    scanf("%lf%d", &x, &n);
    
    for (int i=0; i<=n; ++i) {
        result = x*result+1;
    }
    
    printf("%.2f", result);
    return 0;
}

// not very proud of this code :(


#include <stdio.h>


void swap(int * a, int * b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n, i, j, found=0;
    scanf("%d", &n);
    int arr[n], lst[n];
    for (i=0; i<n; ++i) {
        scanf("%d", &lst[i]);
        if (i==0) arr[i]=lst[i];
        else {
            if (lst[i]>=lst[i-1]) arr[i] = lst[i]-lst[i-1];
            else arr[i] = lst[i-1]-lst[i];
        }
    }
    
    if (n==1) printf("Jolly");
    else {
        for (i=1; i<n; ++i) {
            found = 0;
            for (j=0; j<n; ++j) {
                if (i == arr[j]) found = 1;
            }
            if (found == 0) break;
        }
        if (found == 0) printf("Not jolly");
        else printf("Jolly");
    }
    
    return 0;
}

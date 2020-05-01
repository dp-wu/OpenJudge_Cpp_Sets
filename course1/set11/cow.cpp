#include <cstdio>
#include <algorithm>


int main() {
    int N, C;
    scanf("%d%d", &N, &C);
    
    int barn[N];
    for (int i=0; i<N; ++i) {
        scanf("%d", &barn[i]);
    }
    std::sort(barn, barn+N);
    
    int left, right, mid, best=0;
    left = barn[0];
    right = barn[N-1]/C;
    
    while (left <= right) {
        mid = left + (right-left)/2;
        
        int cur = 0, counter=1;
        for (int i=1; i<C; ++i) {
            for (int j=cur; j<N; ++j) {
                if (barn[j] - mid >= barn[cur]) {
                    cur = j;
                    counter++;
                    break;
                }
            }
        }
        
        if (counter == C) {
            best = mid;
            left = mid+1;
        }
        else right = mid-1;
    }
    printf("%d\n", best);
}

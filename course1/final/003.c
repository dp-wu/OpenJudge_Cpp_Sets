#include <stdio.h>


int main() {
    int h, w, fill;
    char c, fr=' ';
    scanf("%d%d %c %d", &h, &w, &c, &fill);
    
    if (fill == 1) fr = c;
    for (int row=0; row<h; ++row) {
        for (int col=0; col<w; ++col) {
            if ((row>0 && row<h-1) && (col>0 && col<w-1)) printf("%c", fr);
            else printf("%c", c);
        }
        printf("\n");
    }
    return 0;
}

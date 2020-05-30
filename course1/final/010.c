#include <stdio.h>
#include <ctype.h>


int main() {
    int n, m=201, counter=0, rows, left=0, p=0;
    scanf("%d", &n);
    char clst[m];
    scanf("%s", clst);
    
    do {
        counter++;
    } while (clst[counter]!='\0'); // 数字符个数
    rows = counter / n; // 计算行数
    
    char cArr[rows][n];
    for (int i=0; i<rows; ++i) {
        if (i%2==0) {
            for (int j=left; j<left+n; ++j) {
                cArr[i][p] = clst[j];
                ++p;
            }
        } // forward
        else {
            for (int j=left+n-1; j>=left; --j) {
                cArr[i][p] = clst[j];
                ++p;
            }
        } // backward
        left += n;
        p=0;
    } // 还原矩阵
    
    for (int i=0; i<n; ++i) {
        for (int j=0; j<rows; ++j) {
            printf("%c", cArr[j][i]);
        }
    }
    
    return 0;
}

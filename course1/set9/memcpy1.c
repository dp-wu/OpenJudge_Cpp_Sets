#include<stdio.h>


void Memcpy(char * src,char * dest,int n) {
    //printf("----n is: %d\n", n);
    for (int i=0; i<n; ++i) {
        dest[i] = src[i];
        //printf("in the loop: %c\n", dest[i]);
    }
}

int Strlen(char * s) {
    int i;
    for( i = 0; s[i]; ++i);
    return i;
}

int main() {
    int a;
    char s1[30];
    char s2[30];
    int t;
    scanf("%d", &t);
    for(int i = 0;i < t; ++i) {
        scanf("%d", &a);
        int b = 99999999;
        Memcpy((char*)&a,(char *) &b,sizeof(int));
        printf("%d\n", b);
    }
    for(int i = 0;i < t; ++i) {
        scanf("%s", s1);
        Memcpy(s1,s2,Strlen(s1)+1);
        printf("%c\n", *s2);
    }
    return 0;
}

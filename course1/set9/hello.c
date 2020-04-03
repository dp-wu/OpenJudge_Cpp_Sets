#include<stdio.h>


int main() {
    char s[] = "Hello";
    char *p;
    for(p=s; *p; ++p) {
        printf("%c", *p);
    }
    return 0;
}

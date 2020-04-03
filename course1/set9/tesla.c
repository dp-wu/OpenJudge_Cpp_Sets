#include<stdio.h>


void Print(const char * p1, const char * p2)
{
    for(p1=p1; p2-p1; ++p1)
        printf("%c", *p1);
}

int main()
{
    const char *s = "Tesla123";
    Print(s,s+5);
    printf("\n");
    Print(s,s+3);
    printf("\n");
    
    return 0;
}

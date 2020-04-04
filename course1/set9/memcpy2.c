#include<stdio.h>


void Memcpy( void * src, void * dest, int size)
{
    char * psrc = (char *) src;
    char * pdest = (char *) dest;
    char temp[size];
    
    for (int i=0; i<size; ++i) {
        temp[i] = * (psrc + i);
    }

    for (int j=0; j<size; ++j) {
        * (pdest + j) = temp[j];
    }
}

void Print(int * p,int size)
{
    for(int i = 0;i < size; ++i) {
        printf("%d,", p[i]);
    }
    printf("\n");
}

int main()
{
    int a[10];
    int n;
    scanf("%d", &n);
    
    for(int i = 0;i < n; ++i) {
        scanf("%d", &a[i]);
    }
    int b[10] = {0};
    Memcpy(a,b,sizeof(a));
    Print(b,n);
    
    int c[10] = {1,2,3,4,5,6,7,8,9,10};
    Memcpy(c,c+5,5*sizeof(int)); //将c的前一半拷贝到后一半
    Print(c,10);

    char s[10] = "123456789";
    Memcpy(s+2,s+4,5); //将s[2]开始的5个字符拷贝到s[4]开始的地方
    printf("%s\n", s);
    
    char s1[10] = "123456789";
    Memcpy(s1+5,s1+1,4); //将s1[5]开始的4个字符拷贝到s1[1]开始的地方
    printf("%s\n", s1);
    
    
    return 0;
}

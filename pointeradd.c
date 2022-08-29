#include<stdio.h>
int main()
{
    int d=7,e=5;
    int *ptr,*ptr1,sum;
    ptr=&d;
    ptr1=&e;
    sum= *ptr+*ptr1;
    printf("%d",sum);
    return 0;
}

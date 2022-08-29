#include<stdio.h>
int main()
{
    int d=7,s;
    int *ptr;
    ptr=&d;
    printf("%d",*ptr);
    s=sizeof(*ptr);
    printf("%d",s);
    return 0;
}

#include<stdio.h>
int main(){
    int n,*ptr;
    char a[100] ;
    printf("enter the character\n");
    scanf("%s",&a);
    n=strlen(a);
    ptr=&n;
    printf("%d",*ptr);
    return 0;
}

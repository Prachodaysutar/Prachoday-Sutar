#include<stdio.h>
int main(){
    int n,i,count=0;
    printf("enter the amount:");
    scanf("%d",&n);
    char a[n];
    printf("enter the character");
    for(i=0;i<n;i++)
    {
      scanf("%s",&a[i]);
        }
     for(i=0;i<strlen(a);i++)
    {
     if(a[i]!=' ')
            count++;

    } printf("count is :%d",count);
        for(i=0;i<n;i++)
        printf("characters in string is:%s",a[i]);

    return 0;
}

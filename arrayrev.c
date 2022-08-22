#include<stdio.h>
int main()
{
    int n,rev;
int a[n],i;
printf("enter the size ");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=(n-1);i>=0;i--)
{
    printf("%d",a[i]);
}
return 0;
}

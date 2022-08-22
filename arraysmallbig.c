#include<stdio.h>
int main()
{
    int n;
int a[n],i,min,max;
printf("enter the size ");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
min=max=a[0];
for(i=1;i<n;i++)
{
    if(min>a[i])
    {
        min=a[i];
    }
    if(max<a[i])
    {
        max=a[i];
    }
}
printf("min value is: %d\n",min);
printf("max value is : %d\n",max);
return 0;
}

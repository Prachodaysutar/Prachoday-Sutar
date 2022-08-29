#include<stdio.h>
int main ()
{
int i,a[5]={10,11,12,13,14},max,min;
max=min=a[0];
for(i=0;i<=5;i++){
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
printf("max=%d min=%d",max,min);
return 0;
}

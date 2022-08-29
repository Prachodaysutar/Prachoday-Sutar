#include<stdio.h>
int main()
{
int temp,i,j;
int a[5]={1,2,3,4,5};
int b[4]={4,3,2,1};
for(i=1;i<=5;i++){
printf("elements of a is:%d\n",a[i]);}
for(j=1;j<=4;j++){
printf("elements of b is:%d\n",b[j]);}
a[1]=temp;
a[1]=b[1];
b[1]=temp;
printf("after copy:%d\n%d\n",a[1],b[1]);
return 0;


}

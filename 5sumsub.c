#include<stdio.h>
int main()
{
int num1,num2,sum,sub,n;
printf("enter the value of num1 and num2:");
scanf("%d\n%d",&num1,&num2);
sum=num1+num2;
sub=num1-num2;
 n=(num1==5||num2==5||sum==5||sub==5);
printf("%d",n);

return n;
 }

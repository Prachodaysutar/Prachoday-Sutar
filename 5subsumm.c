#include<stdio.h>
int main()
{
int num1,num2,sum,sub;
printf("enter the value of num1 and num2:");
scanf("%d\n%d",&num1,&num2);
sum=num1+num2;
sub=num1-num2;
 if(num1==5||num2==5||sum==5||sub==5)
    {
    printf("true");
    }
    else
    {
        printf("zero");
    }

return 0;
 }

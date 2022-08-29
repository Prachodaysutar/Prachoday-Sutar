#include<stdio.h>
int main()
{
int num,num1,num2,rev;
printf("Enter the Number : ");
scanf("%d",&num);
num1=num;
for(int i=0;i<=num+1;i++)
{
rev=num%10;
num=num/10;
num2=num2*10+rev;
printf("%d",rev);
}
if(num1==num2){
            printf("%d is a palidrom",num1);
        }
        else{
             printf("%d is not palidrom",num1);
        }
return 0;
}

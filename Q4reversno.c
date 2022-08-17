#include<stdio.h>
int main()
{
int num;
printf("Enter the Number : ");
scanf("%d",&num);
for(int i=0;(i<=num-1);i++)
{
int rev=num%10;
num=num/10;
printf("%d",rev);
}
return 0;
}

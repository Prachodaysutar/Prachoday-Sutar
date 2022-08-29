#include<stdio.h>
int zero(int, int);
int main()
{
    int num1,num2,zero,r,a,b;
    printf("enter the number");
    scanf("%d\n%d",&num1,&num2);
    num1=100-num1;
    num2=100-num2;
    if(num1<num2)
    printf("num1 is nearest of 100");

    else if(num1==num2)
    printf("zero");
    else
    printf("num2 is nearest of 100");





return 0;

}

#include<stdio.h>
void swap(int*,int*);
int main()
{
    int a,b;
    printf("enter the no of a:");
    scanf("%d",&a);
    printf("enter the no of b:");
    scanf("%d",&b);
    swap(&a,&b);

}
void swap(int*a,int*b)
{
   int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swapping a is : %d\n and b is :%d",*a,*b);
}

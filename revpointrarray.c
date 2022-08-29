#include<stdio.h>
main(){
    int *ptr,*ptr2;
int a[5]={1,2,3,4,5};
for(int i=0;i<5;i++)
{
    ptr=&a[i];
printf("given numbers are:%d\n",*ptr);
}
for(int i=4;i>=0;i--)
{
    ptr2=&a[i];
    printf("after reverse :%d\n",*ptr2);
}

}

#include<stdio.h>
int main(){
    int a[10];
    int ptr = &a;
    printf("enter the 10 elements of array");
    for(int i=0;i<10;i++){
    scanf("%d",&a[i]);}
    for(int i=0;i<10;i++)
    {
        int *ptr2=&a[i];
    printf("elements are :%d\n",*ptr2);
    }
    return 0;
}

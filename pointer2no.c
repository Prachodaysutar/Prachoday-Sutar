#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of a and b:");
    scanf("%d\n%d",&a,&b);
    int *ptr1=&a,*ptr2=&b;
    if(*ptr1>*ptr2){
    printf("a is largest no");
    }
    else{
    printf("b is the largest no");
    }

    return 0;
}

#include<stdio.h>
void main(){
    int *ptr;
    int sum;
    int a[7]={2,1,4,3,5,7,6};
    printf("given numbers are :");
    for(int i=0;i<7;i++){
            sum=sum+a[i];
    }
     ptr=&sum;
    printf("%d",*ptr);
}

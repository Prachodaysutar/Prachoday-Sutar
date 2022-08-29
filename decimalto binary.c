#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value");
    scanf("%d",&a);
    for(int i=0;i<=4;i++)
    {
    b=a%10;
    a=a/10;
    if(b!=0)
        printf("1");
    else
        printf("0");
    }

//printf("decimal to binary conversion is %d",b);

return 0;
}

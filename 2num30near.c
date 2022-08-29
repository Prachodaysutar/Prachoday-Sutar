#include<stdio.h>
main(){
    int a,b;
    printf("given num is:");
    scanf("%d\n\%d",&a,&b);
    a=a-30;
    b=b-30;
    if(a>b){
        printf("a is nearest to 30");
    }
    else
    {
        printf("b is the nearest to 30");
    }

}

#include<stdio.h>
int main (){
    int a,b,c,big;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c){
        printf("a is the biggest value");

    }
else if(b>c){
printf("b is the biggest no");
}
else{
    printf("c is the biggest no");
}
return 0;
}

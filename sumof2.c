#include<stdio.h>
int main(){
    int a,b,c,sum;
    printf("enter the number :");
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b+c;

    if(a==b){
    return c;}
    else if(b==c){
    return a;}
    else if(a==c){
    return b;}
    else
    printf("%d",sum);
    return 0;
}

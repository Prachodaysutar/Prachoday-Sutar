#include<stdio.h>
int main(){
    int num=10,mult=1,i;
    printf("enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
mult*=i;
printf("the multiple of 10 no is %d\n",mult);
}
return 0;

}

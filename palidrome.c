 #include<stdio.h>
 int main(){
    int num,rev,i;
    printf("enter");
    scanf("%d",&num);
    for(i=0;i<=num-1;i++){
        rev=num%10;
        num=num/10;

 printf("palidrome is :%d\n",rev);
    }
 return 0;
 }

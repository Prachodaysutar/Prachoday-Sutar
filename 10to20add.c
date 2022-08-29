#include<stdio.h>
int main(){
int num1,num2,sum;
printf("enter the number");
scanf("%d\n%d",&num1,&num2);
    sum=num1+num2;
if(sum<20&&sum>10){
printf("30");
}
else{
printf("the ans is%d :",sum);
}
return 0;
}

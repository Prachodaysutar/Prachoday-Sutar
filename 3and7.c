#include<stdio.h>
int main(){
int num;
printf("enter the number");
scanf("%d",&num);
if(num%3==0){
printf("nymber is multiple of 3\n");
}
else{printf("number is not multiple of 3\n");}
if(num%7==0){printf("number is multiple of 7\n");}
else {printf("number is not multiple of 7\n");}
return 0;
}

#include<stdio.h>
int arth(int,int);
int main(){
int a,b;
arth(a,b);
return 0;
}
int arth(int a, int b)
{
 a,b;
 printf("enter the numbers");
 scanf("%d\n",&a,&b);
int res1=a+b;
int res2=a-b;
int res3=a*b;
int res4=a/b;
printf("%d\n %d\n %d\n %d\n",res1,res2,res3,res4);
}

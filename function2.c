#include<stdio.h>
int arth();
int main(){
int a,b;
arth();
return 0;
}
int arth()
{
 int a,b;
 printf("enter the numbers");
 scanf("%d\n",&a,&b);
int res1=a+b;
int res2=a-b;
int res3=a*b;
int res4=a/b;
printf("%d\n %d\n %d\n %d\n",res1,res2,res3,res4);
return (res1,res2,res3,res4);
}

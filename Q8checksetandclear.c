#include<stdio.h>
 int main(){
  int a,b,r,c;
  printf("enter the value of input and bit : ");
  scanf("%d %d",&a,&b);
  r=1<<a&b;
  c=(r==1)?
  printf("11th bit is set"):
  printf("11th bit is clear");
  return 0;
 }

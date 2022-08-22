#include<stdio.h>
int main()
{
int i,j,sum=0;
int a[2][3]={1,2,3,4,5};

for(i=0;i<=1;i++)
     for(j=0;j<=2;j++)
       sum=sum+ a[i][j];



 printf("%d\n ",a[i][j]);





return 0;
}

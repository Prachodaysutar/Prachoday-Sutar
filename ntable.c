#include<stdio.h>
int main()
{
    int n,i,result,t=1;
printf("enter the no:\n");
scanf("%d",&n);
printf("table stating from 1= %d\n",n);

for(i=1;i<=n;i++)
{

for(int j=1;j<=10;j++)
    {
    t=i*j;
   printf("%d *%d=%d\n",i,j,t);
}
}
return 0;
}

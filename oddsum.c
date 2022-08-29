#include<stdio.h>
int main()
{
    int n,odd,sum=0,i;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
        {
      if(i%2!=0)
    {
        printf("%d",i);

   //int sum=odd;

     sum=sum+i;
    }}
printf("the sum of odd  n no is %d\n",sum);

return 0;

    }

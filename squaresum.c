#include<stdio.h>
int main()
{
    int n,sq,sum=0,i;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
        {
     sq=i*i;

        printf("%d",sq);



     sum += sq;
    }
printf("the sum of odd  n no is %d\n",sum);

return 0;

    }

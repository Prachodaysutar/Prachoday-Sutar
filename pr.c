#include<stdio.h>
int main()
{
int i,j,n,count=0;
printf("enter the range\n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    count=0;
    for(j=1;j<=i;j++)
    {
        if(i%j==0)
        {
            count++;

        }

    if(count==2)
{
    printf(" %d is a prime number",j);
}

}



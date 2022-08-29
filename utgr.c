#include<stdio.h>
int main()
{
    int i,j,n,a[i][j];
    int even=0,odd=0;
    printf("enter the element");
    scanf("%d",&a[i][j]);

    for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }}
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<n;j++)
        {
        if(a[i][j]%2==0)
            even=even+1;

        else
            odd=odd+1;

     printf("elements is even\n",even);

    printf("elements is odd\n",odd);

        }
        }


return 0;
}

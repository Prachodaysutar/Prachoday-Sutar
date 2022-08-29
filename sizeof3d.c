#include<stdio.h>
int main(){
    int n,m,t;
    printf("enter the amount of n:");
    scanf("%d",&n);
     printf("enter the amount of m:");
    scanf("%d",&m);
     printf("enter the amount of t:");
    scanf("%d",&t);
    int a[n][m][t];
    int w,i,j,k;
    printf("enter the elements");

    for(int i=0;i<n;i++)
    {
            for(int j=0;j<m;j++)
            {
                for(int k=0;k<t;k++)
                {
 scanf("%d\n",&a[i][j][k]);
                }}}
                for(int i=0;i<n;i++)
    {
            for(int j=0;j<m;j++)
            {
                for(int k=0;k<t;k++)
                {
 printf("array is :%d",a[i][j][k]);
                }}}
                 w= sizeof(a);
                 printf("size is:%d\n",w);
 return 0;
}

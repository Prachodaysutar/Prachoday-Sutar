#include<stdio.h>
int main(){
    int a[2][3][2];
    printf("enter the elements");

    for(int i=0;i<2;i++)
    {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<2;k++)
                {
 scanf("%d\n",&a[i][j][k]);
                }}}
                for(int i=0;i<2;i++)
    {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<2;k++)
                {
 printf("array is :%d",a[i][j][k]);
                }}}
 return 0;
}

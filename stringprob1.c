#include<stdio.h>
int main(){
    int a[2][3][2]={1,2,3,4,5,6,7,8,6,7,8,4,3,7,3,3,2};
    for(int i=0;i<2;i++)
    {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<2;k++)
                {
 printf("%d\n",a[i][j][k]);
                }}}
 return 0;
}

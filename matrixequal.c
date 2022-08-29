#include<stdio.h>
int main()
{
    int m,n,e,ef,i,j,even=0,odd=0,c=1;
    printf("enter the element");
    scanf("%d",&n);
    printf("enter the element");
    scanf("%d",&m);
    int a[n][m],b[n][m];
    printf("enter the elements from array:");

    for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++){
        scanf("%d",&a[i][j]);
    a[i][j]=e;
   }}
    for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++){
           scanf("%d",&b[i][j]);
       b[i][j]=ef;

   }}
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++){
        if(a[i][j]=b[i][j]){
                c++;}}}
        if(c!=1&&c>n){

            printf("matrix is equal\n");
        }
             else{
                printf("matrix is not equal");
             }

return 0;
}



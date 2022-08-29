#include<stdio.h>
int main()
{
    int m,n,e,ef,i,j,even=0,odd=0,c=1;
    printf("enter the element");
    scanf("%d",&n);
    printf("enter the element");
    scanf("%d",&m);
    int a[n][m];
    printf("enter the elements from array:");

    for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++){
        scanf("%d",&a[i][j]);
   }}
   for(int i=0;i<n;i++)
   {
       for(int j=0;j<m;j++){
        if(a[i][j]%2==0){
            c++;
            break;
        }
        if(c!=1){

     printf("elements is even\n",even);}
     else{
                printf("elements is odd\n",odd);}

        }}


return 0;
}

#include<stdio.h>
int main(){
    int n,m,i,j,sum;
    printf("enter the number");
    scanf("%d",&n);
     printf("enter the number");
    scanf("%d",&m);

    sum=n+m;
    printf("sum is =%d\n",sum);

    if(n==m){
    sum=sum*3;
    printf("%d",sum);
    }
return sum;

}

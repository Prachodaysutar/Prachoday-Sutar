#include<stdio.h>
int main()
{
int i,c;
int a[5]={1,2,3,4,5};
//for(i=0;i<5;i++){
//printf(" value are %d\n",a[i]);

int size=sizeof(a)/sizeof(a[5]);
printf("%d",size);
return 0;
}

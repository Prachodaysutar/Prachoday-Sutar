#include<stdio.h>
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
//int size=sizeof(a)/sizeof(a[i]);
//printf("%d",size);
//int a[i],i;
//for(i=0;i<j;i++){
//printf("enter the value: %d ",a[j]);
int a[size],i;
printf("\n enter the elements");
for(i=0;i<size;i++){

scanf("%d\n",&a[i]);}

for(i=0;i<size;i++){

printf(" number is:%d\n",a[i]);}


return 0;
}

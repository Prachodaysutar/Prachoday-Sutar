#include<stdio.h>
int main()
{
    int size;
    printf("enter the size:");
    scanf("%d",&size);
    int a[size],i;
printf("\n enter the elements");
for(i=1;i<size;i++){

scanf("%d\n",&a[i]);}

for(i=1;i<size;i++){

printf(" number is:%d\n",a[i]);
//int t=a[i];
   // t=t*a[i];
int memory = sizeof(a);
printf("memory is :%d",memory);

//printf("memory is :%d",memory1);
}
return 0;
}

#include<stdio.h>
void main()
{
int p1,p2,p3,max;
printf("Enter the 3 weights : ");
scanf("%d %d %d",&p1,&p2,&p3);
if(p1>p2&&p1>p3){
printf("max weight person is p1");

}
else if(p2>p3){
printf("max weight person is p2");

}
else{
printf("max weight of person is p3");
}

}

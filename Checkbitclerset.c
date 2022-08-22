#include<stdio.h>
void main()
{
int i,bit;
printf("Enter the numbers and bit :");
scanf("%d %d",&i,&bit);

int check=~(1<<bit)&i;

if(check==0){
  printf("The bit is clear");
}
else{
    printf("The bit is set");
}

}

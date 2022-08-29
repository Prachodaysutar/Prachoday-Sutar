#include<stdio.h>
int main(){
    int fac,fact=1;
    int *ptr2;
   printf("enter the number");
  scanf("%d",&fac);
    ptr2 = &fact;
    for(int i=1;i<=fac;i++){
      //  fact=fact*i;
    *ptr2 = *ptr2 * i;
    }
        printf("%d",*ptr2);


return 0;
}

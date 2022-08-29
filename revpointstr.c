#include<stdio.h>
 void main(){
     char rev;
     char *ptr;
    char a[10]= "noproblem";
    printf("given :%s",a);
int    len = strlen(a);
    for(int i=len;i>=0;i--)
    {
        ptr=&a[i];
   printf("%c",*ptr);
    }


}

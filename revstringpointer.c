#include<stdio.h>
main(){
    char *ptr;
    char a="noproblem";
    printf("given :%s",a);
   char rev=strrev(a);
    char ptr=&a;
    printf("reverse is :%s",*ptr);
}

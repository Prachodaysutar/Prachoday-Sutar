#include<stdio.h>
main(){
    char rev;
    char *ptr;
    char a[]="noproblem";
    printf("%s",a);
    int len=strlen(a);
    for(int i=len-1;i>0;i--){
    printf("reverse pointer is :%c",a[i]);
    }

}

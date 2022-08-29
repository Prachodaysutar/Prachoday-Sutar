#include<stdio.h>
int main(){
    int i;
    char n;
    char str[100]="string";
    printf("%s\n",str);
    n= strlen(str);
    for(i=n-1;i>=0;i--){
    printf("%c",str[i]);
    }
    return 0;

}

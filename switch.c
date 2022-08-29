#include<stdio.h>
int main(){
    int a,b,c,f;
    printf("enter the value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    printf("\ncheck the case a");
    printf("check the case b\n");
    printf("check the case c\n");
    printf("enter the case to be check\n");
    scanf("%d",&f);
        switch(f)
        {
        case 1: if(a>b&&a>c)
        {printf("%d is the big num",a);}
        else{printf("not big");}
        break;

        case 2: if(b>a&&b>c){
        printf("%d is the big num",b);}
        break;

        case 3: if(c>a&&c>b){
        printf("%d is the big num",c);}
        break;
        }
return 0;
}

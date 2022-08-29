#include<stdio.h>
int main(){
    int *ptr1,*ptr2;
    int vow =0,con=0;
    char a[100];
    printf("enter the character");
    scanf("%s",a);
    ptr1=&vow;ptr2=&con;
    for(int i=0;a[i]!='NULL';i++){
    if(a[i]=='a','e','i','o','u'){
        //printf(" the vowels are:%s",a[i]);
        *ptr1++;
        printf(" the vowels are:%d",*ptr1++);
    }
    else{
        //printf("the consonant are :%s",a[i]);
        *ptr2++;
        printf(" the vowels are:%d",*ptr2++);

    }
    }
return 0;

}

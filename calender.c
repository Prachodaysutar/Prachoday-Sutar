#include<stdio.h>
int main()
{
int day =20;
int c=1;
while(c<day)
{
    for(int i=0;i<7;i++)
    {
        if(c<=day)
            printf("\t%d",c);
        c++;
        printf("\n");
    }
}
}

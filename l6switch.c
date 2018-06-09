#include<stdio.h>
void main()
{
    int a,b,c,e,f;
    char d;
    printf("ENTER YOUR CHOICE\t:\n");
    scanf("%c",&a);
    printf("ENTER YOUR VALUE A\t:\n");
    scanf("%d",&b);
    printf("ENTER YOUR VALUE B\t:\n");
    scanf("%d",&c);
    f=(b+c);
    printf("%d",f);
    e=(b-c);
    printf("%d",e);

    switch(a)
    {
        case '+':
        break;
        case '-':
        break;
        default:
        printf("ERROR");
    }
}
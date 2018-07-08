#include<stdio.h>

int main()
{
    int a,b,c,d,*ptr1,*ptr2;

    a=5;
    b=10;

    ptr1=&a;
    ptr2=&b;

    c=*ptr1+*ptr2;
    d=*ptr2 / *ptr1 * 7;

    printf("ADDRESSES OF VARIABLES 'a' AND 'b' :-\n");
    printf("a :%u \n",&a);
    printf("b :%u \n",&b);
    printf("\n");

    printf("ADDRESSES OF POINTER 'ptr1' AND 'ptr2' hold:-\n");
    printf("ptr1=%u \n",&ptr1);
    printf("ptr2=%u \n",&ptr2);

    printf("\n");

    printf("VALUES OF 'a','b','c' AND 'd':-\n");
    printf("a=%2d b=%2d c=%2d d=%2d\n",a,b,c,d);
    printf("\n");

    printf("VALUES ACCESSED BY POINTERS 'ptr1' AND 'ptr2':-\n");
    printf("*ptr1=%2d *ptr2=%2d\n",*ptr1,*ptr2);
}
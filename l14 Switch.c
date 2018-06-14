#include<stdio.h>

void main()
{
char a; 
int c,b,d,e;
printf("ENTER YOUR CHOICE\t:\t");
scanf("%c",&a);
printf("ENTER THE NUMBER A\t:\t");
scanf("%d",&c);
printf("ENTER THE NUMBER B\t:\t");
scanf("%d",&b);




switch(a)
{
case '+':
d=(c+b);
printf("%d",d);
break;
case '-':
e=(c-b);
printf("%d",e);
break;
default:
printf("ERROR");
}
}

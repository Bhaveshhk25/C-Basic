#include<stdio.h>

void main()
{
int a,b,d,c,e,f;

printf("ENTER A\t:");
scanf("%d",&a);
printf("ENTER B");
scanf("%d",&b);
printf("ENTER C\t:");
scanf("%d",&c);
printf("ENTER E\t:");
scanf("%d",&e);
d=(a+b);
printf("%d",d);
f=(c+e);
if((a+b)==(c+e))
{
printf("equal\n");
}
else
{
printf("not equal\n");
}
}

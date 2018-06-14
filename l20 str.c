#include<stdio.h>

struct emp
{
char name[10];
int age;
};

void main()
{
struct emp e;
printf("Enter your name");
scanf("%s",e.name);
printf("Enter your age");
scanf("%d",&e.age);

printf("%s\n",e.name);
printf("%d",e.age);


}


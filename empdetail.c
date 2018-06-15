#include<stdio.h>

struct empdetails
{
char name[10];
char salary[30];
int dd;
int mm;
int yy;
int b;
}
a;

void main()
{

printf("ENTER YOUR NAME\n");
scanf("%s",a.name);
printf("ENTER YOUR EMPOLY's SALARY\n");
scanf("%s",a.salary);
printf("ENTER YOUR BASIC SALARY,BIRTH DATE MONTH AND YEARA  AS PER ON CERTIFICATE\n");
scanf("%d",&a.dd);
scanf("%d",&a.mm);
scanf("%d",&a.yy);

scanf("%d",&a.b);
if (50==50)
{
    printf("CONGRATS YOU HAVE BONES RS.5000");
}
else(50>50)
{
    printf("SORRY YOU DON'T REQUIRE BONES RS.5000");
}

printf("%s\n",a.name);
printf("%s\n",a.salary);
printf("%d",a.dd,a.mm,a.yy);
}

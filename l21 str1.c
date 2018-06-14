#include<stdio.h>

struct detail
{
char name[10];
char pwd[10];
int age;
int id;
char idpwd[10];
};

void main()
{
struct detail a;
printf("ENTER YOUR NAME\n");
scanf("%s",a.name);
printf("ENTER YOUR PWD\n");
scanf("%s",a.pwd);
printf("ENTER YOUR AGE\n");
scanf("%d",&a.age);
printf("ENTER YOUR ID NUMBER\n");
scanf("%d",&a.id);
printf("ENTER YOUR ID PWD\n");
scanf("%s",a.idpwd);

printf("%s",a.name);
printf("-------------------------------------");
printf("%s",a.pwd);
printf("-------------------------------------");
printf("%d",a.age);
printf("-------------------------------------");
printf("%d",a.id);
printf("-------------------------------------");
printf("%s",a.idpwd);
printf("-------------------------------------");
printf("THANKYOU");
}

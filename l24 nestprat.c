#include<stdio.h>

struct empdetails
{
char name[10];
char work[30];
	struct empsalarydeatils
	{
	int bs;
	int hra;
	int pf;
	int oa;
	}b;

}a;

void main()
{

printf("ENTER YOUR NAME\n");
scanf("%s",a.name);
printf("ENTER YOUR EMPOLY's WORK\n");
scanf("%s",a.work);

printf("ENTER YOUR BASIC SALARY,HRA,PF AND other_and_alavence\n");
scanf("%d",&a.b.bs);
scanf("%d",&a.b.hra);
scanf("%d",&a.b.pf);
scanf("%d",&a.b.oa);
printf("%s\n",a.name);
printf("%s\n",a.work);
printf("%d",a.b.bs+a.b.hra+a.b.pf+a.b.oa);
}


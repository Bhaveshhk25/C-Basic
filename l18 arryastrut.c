#include<stdio.h>

struct empdetails
{
char name[10];
char passwd[30];
	struct empdob
	{
	int dd;
	int mm;
	int yy;
	}d;

}e;

void main()
{

printf("ENTER YOUR NAME\n");
scanf("%s",e.name);
printf("ENTER YOUR PASSWD\n");
scanf("%s",e.passwd);

printf("ENTER YOUR DOB\n");
scanf("%d",&e.d.dd);
scanf("%d",&e.d.mm);
scanf("%d",&e.d.yy);

printf("%s\n",e.name);
printf("%s\n",e.passwd);
printf("%d-%d-%d",e.d.dd,e.d.mm,e.d.yy);
}


#include<stdio.h>

struct empdetails

{
char name[10];
char address[30];
char idname[10];
}a[3];

void main()
{
int i=0;
for(i=0;i<3;i++)
{
printf("ENTER YOUR NAME\n");
scanf("%s",a[i].name);
printf("ENTER YOUR ADDRESS\n");
scanf("%s",a[i].address);
printf("ENTER YOUR ID NAME\n");
scanf("%s",a[i].idname);
}

for(i=0;i<3;i++)
{
printf("%s\n",a[i].name);
printf("%s\n",a[i].address);
printf("%s\n",a[i].idname);
}

}


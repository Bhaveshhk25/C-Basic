#include<stdio.h>

void main()
{
long int m,n;
char name[20];
float t;
char nam[20];
printf("ENTER YOUR NAME\t:");
scanf("%s",name);
printf("ENTER YOUR ID PASSWD No\t:");
scanf("%ld",&m);
printf("ENTER YOUR AGE\t:");
scanf("%ld",&n);
printf("ENTER YOUR SALARY");
scanf("%f",&t);
printf("ENTER YOUR ADDRESS\t:");
scanf("%s",nam);

printf("----------------------------------------------------------------------------------------\n");
printf("\t\t\t\t\tOUTPUT\n");                                                                                            
printf("%s\n",name);
printf("%ld\n",m);
printf("%ld\n",n);
printf("%f\n",t);
printf("%s\n",nam);
printf("----------------------------------------------------------------------------------------\n");
printf("\t\t\t\t\tTHANK YOU\n");
}





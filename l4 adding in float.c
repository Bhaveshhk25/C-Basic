#include<stdio.h>

void main()
{
float tamil,english,maths,science,social,answer;
printf("ENTER MARK IN TAMIL\t:");
scanf("%f",&tamil);
printf("ENTER MARK IN ENGLISH\t:");
scanf("%f",&english);
printf("ENTER MARK IN MATHS\t:");
scanf("%f",&maths);
printf("ENTER MARK IN SCIENCE\t:");
scanf("%f",&science);
printf("ENTER MARK IN SOCIAL\t:");
scanf("%f",&social);
answer=(tamil+english)+(maths+science)+(social)/5;
printf("%f\n",answer);
}

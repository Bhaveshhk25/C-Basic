#include<stdio.h>

struct student_details
{
char name[10];
char rollno[30];
int tamil;
int english;
int maths;
int science;
int social; 
	
}
a;

int main(){

int i;
float avarage;

for(i=0 ;i<2; i++)
{

printf("ENTER YOUR NAME A:\n");
scanf("%s",a.name);
printf("ENTER YOUR ROLLNO\n");
scanf("%s",a.rollno);
}
for(i=0 ;i<2; i++)
{
printf("ENTER YOUR MARK IN TAMIL_ENGLISH_MATHS_SCIENCE_SOCIAL\n");
scanf("%d",&a[i].tamil);
scanf("%d",&a[i].english);
scanf("%d",&a[i].maths);
scanf("%d",&a[i].science);
scanf("%d",&a[i].social);
}

for(i=0 ;i<2; i++)
{
printf("%s\n",a[i].name);
printf("%s",a[i].rollno);
avarage=((a[i].tamil+a[i].english+a[i].maths+a[i].science+a[i].social) /5);
printf("%f\n",avarage);
}}

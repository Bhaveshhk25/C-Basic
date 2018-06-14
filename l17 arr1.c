#include<stdio.h>

int add(); // declare

void main()
{
int c;
c=add();  //calling

printf("%d",c);

}

int add()  //define
{
int a,b;
a=10;
b=10;
return a+b;
}

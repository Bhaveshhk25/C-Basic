#include<stdio.h>

int fun2(); 

void main()
{
int c;
c=fun2();  

printf("%d",c);

}

int fun2()  
{
int a,b;
a=10;
b=10;
return ((a*a)+(b*b)+(2*a+b)/2);
}

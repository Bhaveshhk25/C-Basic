#include<stdio.h>

int main()
{
    int i=7;
    float f=10.5;
    char c='A';
    
    printf("%d  IS STORED AT ADDRESS %u\n",i,&i );
    printf("\n %f IS STORED AT ADDRESS %u\n",f,&f);
    printf("\n %c IS STORED AT ADDRESS %u\n",c,&c);
}
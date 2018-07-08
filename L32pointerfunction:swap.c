#include<stdio.h>

int main()
{
    int a,b;
    void exchange();

    printf("PROGRAM SWAPS VALUES OF THE VARIABLES 'a' AND 'b'\n");
    printf("\nVALUES OF a AND b :\n");
    scanf("%d%d",&a,&b);
    printf("a=%5d b=%5d\n",a,b);
    exchange(&a,&b);
    printf("\nAFTER SWAPING:\n");
    printf("a=%5d b=%5d\n",a,b);
}
void exchange(x,y)
int *x,*y;
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
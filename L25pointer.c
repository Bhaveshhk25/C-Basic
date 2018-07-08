#include<stdio.h>

int main()
{
    int i,b,small,*point,c[60];

    printf("ENTER THE ARRAY\t:\n");
    scanf("%d",&b);
    printf("%d\n",b);
    
    printf("-------------------------------------------------------------\n");

    printf("ENTER THE ARRAY ELEMENTS\t:\n");
    for(i=0; i<b;i++)
    scanf("%d",&c[i]);

    printf("-------------------------------------------------------------\n");

    for(i=0;i<b; i++)
    printf("%5d",c[i]);
    printf("\n");
    
    point=c;

    small=*point;

    point++;

    for(i=0; i<b; i++)
    {
        if(small>*point)
        small=*point;
        point++;

        printf("SMALLEST ELEMENT IS %5d\n",small);
    }

}
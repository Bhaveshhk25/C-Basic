#include<stdio.h>

int main()
{
    int i,n,small,*ptr,a[50];

    printf("SIZE OF THE ARRAY ?");
    printf("%d",&n);
    printf("%d",n);

    printf("\n ARRAY ELEMENTS ?\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
    ptr=a;

    small=*ptr;
    ptr++;
    for(i=0;i<n;i++)
    {
        if(small>*ptr)
        small=*ptr;
        ptr++;
    }
    printf("\nSMALLEST ELEMENT IS %5d\n",small);
}
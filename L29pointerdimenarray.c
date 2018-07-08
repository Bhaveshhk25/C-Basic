#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n,*vector;
    void bubble();

    printf("SIZE OF THE ?");
    printf("%d",&n);
    printf("%d",n);

    vector=(int*)malloc(n *sizeof(int));
    
    printf("\nENTER ELEMENTS SEPERATED BY BLANKS\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",vector+i);
    }
    for(i=0;i<n;i++)
    {
        printf("%5d",*(vector+i));
    }
    printf("\n");
    bubble(vector,n);
    for(i=0;i<n;i++)
    {
        printf("%5d",*(vector+i));
    }
    printf("\n");
}
void bubble(x,m)

int *x,m;
{
    int pass,i,temp;
    for(pass=0;pass<m-1;pass++)
    {
        for(i=0;i<m-pass;i++)
        {
            if(*(x+i)>*(x+i+1))
            {
                temp=*(x+i);
                *(x+i)=*(x+i+1);
                *(x+i+1)=temp;
            }
        }
    }
}
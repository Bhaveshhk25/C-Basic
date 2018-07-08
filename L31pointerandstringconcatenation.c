#include<stdio.h>
#include<malloc.h>
#define length 40

int main()
{
    char *s1,*s2,*s3,c;
    int i,j,k;

    s1=(char*)malloc(length*sizeof(char));
    s2=(char*)malloc(length*sizeof(char));
    s3=(char*)malloc(2*length*sizeof(char));

    printf("ENTER STRING ONE \n");
    scanf("%s",s1);
    printf("%s\n",s1);
    printf("ENTER STRING TWO \n");
    scanf("%s",s2);
    printf("%s\n",s2);
    i=0;

    while((c=*(s1+i))!='\0')
    {
        s3[i]=c;
        i++;
    }
    k=0;
    while((c=*(s1+k))!='\0')
    {
        s3[i+k]=c;k++;
    }
    printf("\nCONCATENATED STRING IS:\n");
    printf("%s\n",s3);
}
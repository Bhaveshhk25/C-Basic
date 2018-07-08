#include<stdio.h>

int main()
{
    char string[80],*ptr;

    ptr=string;

    printf("ENTER THE STRING TO FIND IT's LENGTH\n");

    while((*ptr++ = getchar())!='\n');
    *--ptr='\0';

    printf("\nSTRING IS :%s\n",string);
    printf("\nIT,s LENGTH IS:%d\n",(ptr-string));
}
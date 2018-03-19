#include<stdio.h>
#include<String.h>
void main()
{
    char st[50],n;
    printf("Enter a string\n");
    gets(st);
    printf("Length of string is - %d\n",strlen(st));
    printf("Reversed string is - %s\n",strrev(st));
    strrev(st);
    printf("String in lower case - %s\n",strlwr(st));
    printf("String in upper case - %s\n",strupr(st));
}



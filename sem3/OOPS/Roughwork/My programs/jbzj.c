#include<stdio.h>
#include<string.h>
void main()
{
    char ch[50];
    printf("Enter string\n");
    gets(ch);
    int i,j,c=0,v=0;
    for(i=0;ch[i]!='\0';++i);
    ch[i];
    for(j=0;ch[j]!='\0';j++)
    {
        if((j>=65)||(j<=90))
            ch[j]= ch[j]+32;
    }
printf("\nNew String is :- %s",ch);
}


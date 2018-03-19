#include<stdio.h>
void main()
{
FILE *pop=fopen("C:\\Users\\vai\\Desktop\\Vini.txt","r");
char c;

while(c!=EOF)
{
    c=getc(pop);
printf("%c",c);
}
fclose(pop);
}

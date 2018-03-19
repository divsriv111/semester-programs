#include<stdio.h>
#include<string.h>
void main()
{
char s[50];
gets(s);
int l=strlen(s);
s[l];
printf("%s",s);
printf("\n%c%c%c",s[0],s[1],s[2]);
}

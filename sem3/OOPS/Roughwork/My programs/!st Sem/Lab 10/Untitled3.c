#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 char *ch;
 int i,j,k,l,n=100;
 ch=(char*)malloc(n*sizeof(char));
 fflush(stdin);
 gets(ch);
 l=strlen(ch);
 printf("%d",l);
 getch();
}

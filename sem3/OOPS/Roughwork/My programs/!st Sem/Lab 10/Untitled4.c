#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void main()
{
 char *ch;
 int i,j,k,l,n=100,m;
 ch=(char*)malloc(n*sizeof(char));
 gets(ch);
 l=strlen(ch);
 for(i=0;i<l;i++)
 {
  if(ch[i]=='a')
  {
   for(j=i;j<l;j++)
   {
    ch[j]=ch[j+1];
   }
   l--;
   i--;
  }
 }
 printf("%s",ch);
 getch();
}

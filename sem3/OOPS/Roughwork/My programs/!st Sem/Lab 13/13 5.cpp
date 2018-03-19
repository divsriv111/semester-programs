#include<stdio.h>
#include<conio.h>
int main()
{
int i=0;
char s1[10],s2[10];
printf("\n enter the string 1 \n");
gets(s1);
printf("\n enter the string 2\n");
gets(s2);
printf("\n string 1:-%s",s1);
printf("\n string 2:-%s",s2);
while(s1[i]!=NULL)
{
s2[i]=s1[i];
i++;
}
s2[i]='\0';
printf("\n After copy the string2= %s",s2);
getch();
}

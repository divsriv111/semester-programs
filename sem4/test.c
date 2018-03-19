#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<dos.h>
#include<stdlib.h>
int main()
{
char ch,a[500],b[500],i=0,j,k,l=0;
while(1)
{
scanf("%c",&ch);
if(ch=='\n')
break;
a[i]=ch;
i++;
}
printf("\n\n");
i=0;
while(1)
{
strcpy(b,a);
if(b[i]>='A' && b[i]<='Z')
b[i]+=32;
else if(b[i]>='a' && b[i]<='z')
b[i]-=32;
l=0;
while(b[l]!='\0')
{
printf("%c",b[l]);
l++;
}
delay(1000);
system("cls");
if(i==strlen(a))
i=0;
else
i++;
}
getch();
return 0;
}


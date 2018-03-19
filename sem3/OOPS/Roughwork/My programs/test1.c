#include<stdio.h>
#include<conio.h>
void main()
{
	int i=1;
	while(i>0)
	{
     char ch;
	scanf("%c",&ch);
if(ch>=65&&ch<=90)
printf("%c is in Upper case\n",ch);
 if(ch>=95&&ch<=122)
printf("%c is in Lower case\n",ch);
else
printf("%c is a special character",ch);
	getch();
}
}


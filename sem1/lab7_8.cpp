#include<stdio.h>
#include<conio.h>
int main()
{
	int n;char ch;
	printf("input a character");
	scanf("%c",&ch);	
	n=(int)ch;
	if ((n>64)&&(n<91))
	printf("upper case alphabet");
	else if((n>96)&&(n<123))
	printf("lower case alphabet");
	else if((n>=0)&&(n<10))
	printf("a digit");
	else
	printf("a special symbol");
	getch();
	return 0;
}

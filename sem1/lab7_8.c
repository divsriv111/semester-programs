#include<stdio.h>
#include<conio.h>
int main()
{
	int n;char ch;
	printf("input a character");
	scanf("%c",&ch);	

	if ((ch>64)&&(ch<91))
	printf("upper case alphabet");
	else if((ch>96)&&(ch<123))
	printf("lower case alphabet");
	else if((ch>=48)&&(ch<57))
	printf("a digit");
	else
	printf("a special symbol");
	getch();
	return 0;
}

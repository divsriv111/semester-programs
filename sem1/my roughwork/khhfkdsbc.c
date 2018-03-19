#include<stdio.h>
int main()
{
	char name[50];
	printf("Enter your full name\n");
	gets(name);
	puts("Hello!");
	puts(name);
	getch();
	return 0;
}

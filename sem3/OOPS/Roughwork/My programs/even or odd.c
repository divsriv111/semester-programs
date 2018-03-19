#include<stdio.h>
#include<conio.h>
void main()
{
	int no;
	printf("Enter a no.");
	scanf("%d",&no);
	((no&1)&&printf("odd")||printf("even"));
	getch();
}

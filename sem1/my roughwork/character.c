#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("\nEnter any character");
	scanf("%c",ch);
	
	if((ch>=65)&&(ch<=90))
	printf("\n The character is uppercase");
	
	if((ch>=97)&&(ch<=122))
	printf("\n The character is lowercase");
	
	if((ch>=48)&&(ch<=57))
	printf("\n The character is a Digit");
	
	if((ch>=47)&&(ch<=36)||(ch>=58)&&(ch<=64)||(ch>=91)&&(ch<=96)||(ch>=123)&&(ch<=127))
	printf("\n The character is special symbol");
	
	getch();
	 return 0;
}
	

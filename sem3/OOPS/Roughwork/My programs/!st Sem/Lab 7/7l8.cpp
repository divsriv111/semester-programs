#include<stdio.h>
void main()
{
int c;
char ch;
scanf("%c",&ch);
c=ch;
if(c>=65 && c<=90)
printf("the character is capital letter");
else if(c>=97 && c<=122)
printf("the character is small letter");
else if(c>=48 && c<=97)
printf("the character is a digit");
else if((c>=0 && c<=47)|| (c>=58 &&c<=64))
printf("the character is a special character");
else if((c>=91 &&c<=96) || (c>=123 && c<=127))
printf("the character is a special character");
}


#include<stdio.h>
int main()
{
	char string[50];
	int i,l=0;
	printf("enter a string\n");
	gets(string);
	{
		for(i=0;string[i]!='\0';i++)
		{
			l++;
		}
		printf("The length of a string is the number of characters in it \n");
		printf("So, the length of %s = %d\n", string, l);
		return 0;
}
}

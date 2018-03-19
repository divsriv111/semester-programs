#include<stdio.h>
#include<string.h>
void reverse(void);
int main()
{
	reverse();
	return 0;
}
void reverse(void)
{
	int k,i;
	char c[100];
	printf("Enter the string\n");
	gets(c);
	k=strlen(c);
	for(i=k;i>=0;i--)
	printf("%c",c[i]);
}

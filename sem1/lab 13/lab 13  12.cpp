#include<stdio.h>
#include<string.h>
int main()
{
	char a[80];
	int i;
	printf("enter a string\n");
	scanf("%s",a);
	for(i=0;i<=strlen(a);i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	 a[i]=' ';
	}
	printf("%s",a);
}

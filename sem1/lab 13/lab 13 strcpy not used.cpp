#include<stdio.h>
#include<string.h>
int main()
{
	char a[100],i, b[100];
	printf("enter a string\n");
	gets(a);
	for(i=0;a[i]!='\0';++i)
	{
     	b[i]=a[i];
		 }
	b[i]='\0';
	printf("r=%s",b);
	return 0;
}
	

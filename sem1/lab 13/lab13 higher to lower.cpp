#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int a=0,i;
	printf("enter a string\n");
	scanf("%s",str);
	a=strlen(str);
	for(i=0;i<=a;i++)
	{
		if(str[i]>=65&&str[i]<=90)
		{
			str[i]=str[i]+32;
		}
	 }
	 		printf("change=%s",str);
 
}

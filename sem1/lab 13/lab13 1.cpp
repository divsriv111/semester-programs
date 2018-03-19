#include<stdio.h>
#include<string.h>
int main()
{
	char str[10];
	int i,j=0,k=0,n=0;
	printf("enter a sentence\n");
	scanf("%s",&str);
	j=strlen(str);
	for(i=0;i<j;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		k++;
		else
		n++;
	}
	printf("vowel=%d\n",k);
	printf("con=%d",n);
}

#include<stdio.h>
#include<string.h>
int main()
{
	char b[100],c[200];
	int len1,len2,i,k,j=0;
		
	printf("Enter string1\n");
	gets(c);
	len1=strlen(c);
	printf("Enter string2\n");
	gets(b);
	len2=strlen(b);
	k=len1+len2;
	for(i=len1;i<k;i++)
	{
	c[i]=b[j];
	j++;
	}
	c[i]='\0';
	
	
	puts(c);
	
	return 0;
}

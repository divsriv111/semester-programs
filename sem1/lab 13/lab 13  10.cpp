#include<stdio.h>
#include<string.h>
int main()
{
	char a[80];
	int i,j,k;
	printf("enter a string\n");
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]=='  '||a[i]=='  '||a[i]=='  '||a[i]=='  '||a[i]=='  ')
		{
				for(k=i;k<(strlen(a)-1);k++)
					a[k]=a[k+1];
		
				a[k]=NULL;
				i--;	
		}
	}
	printf("%s",a);
}

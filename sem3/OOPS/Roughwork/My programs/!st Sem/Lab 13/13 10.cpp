#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char ch[100];
	int i,j,k,l;
	printf("enter the string ");
	gets(ch);
	int n;
	n=strlen(ch);
	for (i=0;i<n;i++)
	{
		if (ch[i]==' '&&ch[i+1]==' ')
		{
			for (k=i;k<n;k++)
			{
				ch[k]=ch[k=1];
			}
			n--;
			i++;
		}
	}
	printf("the new string is %s",ch);
}


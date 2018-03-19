#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],w[50][50];
	int st=0,i,j,lw=0,l,n=0,k;
    	
	gets(s);
	k=strlen(s);
	s[k]=' ';
	s[k+1]='\0';
	for(i=0;s[i]!='\0';i++)
	{
       
		if((int)s[i]==32)
		{
			for(j=0;j<i-st;j++)
			{
				w[n][j]=s[j+st];
			}
			w[n][j]='\0';
			n++;
			st=i+1;
			
		}
	}
	for(i=0;i<n;i++)
	printf("%s\n",w[i]);
	return 0;
}

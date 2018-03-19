#include<stdio.h>
#include<conio.h>
#include<string.h>
int xstrend(char s[],char t[])
{
	int i=0,j=0;
	int len1,len2;
	len1=strlen(s);
	len2=strlen(t);
	while(t[i]!='\0')
	{
		if(t[len2-i]==s[len1-i])
		j++;
		else break;
		i++;
	}
	if(j==len2)
	return 1;
	else return 0;
	
}
int main()
{
	char s[40],t[25];
	printf("Enter String 1\n");
	scanf("%s",&s);
	printf("\nEnter String 2\n");
	scanf("%s",&t);
	if(xstrend(s,t))
	printf("\nT is present at the End of S ");
	else
	printf("\nT is NOT present at the End of S ");
	getch();
	return 0;
}

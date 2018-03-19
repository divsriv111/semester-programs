#include<stdio.h>
#include<conio.h>
#include<string.h>
char s[40],t[25];
int len;
void cat(char *ps,char *pt)
{
	int i=0;
	while(*(pt+i)!='\0')
	{
		*(ps+len+i)=*(pt+i);
		i++;
	}
	*(ps+len+i)='\0';
}
int main()
{
	printf("Enter String 1\n");
	scanf("%s",s);
	len=strlen(s);
	printf("\nEnter String 2\n");
	scanf("%s",t);
	cat(s,t);
	puts(s);
	getch();
	return 0;
}

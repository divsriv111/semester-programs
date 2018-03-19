#include<stdio.h>
#include<string.h>
#define MAX 100
int countv(char a[])
{
	int i=0,l=0;
	while(a[i]!='\0')
	{
		if(((a[i]=='a'||(a[i]=='A'))||((a[i]=='e'||a[i]=='E'))||((a[i]=='i')||(a[i]=='I'))||((a[i]=='o')||(a[i]=='O'))||((a[i]=='u')||(a[i]=='U')))&&(a[i]!=' '))
		l++;
		i++;
	}
	return l;
}
int main()
{
	char a[MAX];
	int l,l1;
	printf("ENTER STRING\n");
	gets(a);
	l=strlen(a);
	l1=countv(a);
	printf("\nVowels=%d",l1);
	printf("\nconsonent=%d",l-l1);
	return 0;
}

#include<stdio.h>
#include<string.h>
#define MAX 100
void deletev(char a[])
{
	int i=0,l=0,j=0;
	while(a[i]!='\0')
	{
		if(((a[i]=='a'||(a[i]=='A'))||((a[i]=='e'||a[i]=='E'))||((a[i]=='i')||(a[i]=='I'))||((a[i]=='o')||(a[i]=='O'))||((a[i]=='u')||(a[i]=='U')))&&(a[i]!=' '))
		{
			j=i;
			while(a[j]!='\0')
			{
				a[j]=a[j+1];
				j++;
			}
		}
		i++;
	}
}
int main()
{
	char a[MAX];
	printf("ENTER STRING\n");
	gets(a);
	deletev(a);
	printf("\n");
	puts(a);
	return 0;
}

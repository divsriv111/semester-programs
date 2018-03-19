#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i=0,temp;
	char a[100];
	printf("Enter the string\n");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]=='.')
		{
		temp=i;
		break;}
		i++;
		
	}
	printf("\n%d",temp+1);
}

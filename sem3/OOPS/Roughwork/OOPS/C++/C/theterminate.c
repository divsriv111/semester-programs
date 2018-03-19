#include<stdio.h>
#include<conio.h>
int slenght(char a[])
{
	int i=0;
	while(a[i]!='\0')
		i++;
	return i;
}
void main()
{
	int i=0,j,k;
	char a[150];
	printf("ENter the string\n");
	gets(a);
	j=slenght(a);
	while(a[i]!='\0')
	{
		if((a[j]=='t')&&(a[j+1]=='h')&&(a[j+2]=='e'))
		{
			k=j;
			while(a[j]!='\0')
		{
			a[k]=a[k+3];
			k++;
		}
		}else
		j++;
		i++;	
	}
	printf("\n");
	puts(a);
}

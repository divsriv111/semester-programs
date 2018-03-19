#include<stdio.h>
void main()
{
	int i=0,j=0,k,temp;
	char a[100];
	printf("Enter the string\n");
	gets(a);
	while(a[i]!='\0')
	{
	if(a[i]==' '&&a[i+1]==' ')
	{ 	k=i;
		while(a[k]!='\0')
		{
		a[k]=a[k+1];
		k++;
		}		
	}
	else
	i++;
	}
	printf("\nString is:");
	puts(a);

}

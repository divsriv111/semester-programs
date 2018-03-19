#include<stdio.h>
#include"random.h"
void dsp(char a[],int n)
{
	int i;

	for(i=0;i<n;i++)	
	printf("%c ",a[i]);
}
void insertion(char a[],int n)
{
	int i,j,c=0;
	char item;
	for(j=1;j<n;j++)
	{
		item=a[j];
		i=j-1;
		while(i>=0&&item<a[i])
		{
			c++;
			a[i+1]=a[i];
			i=i-1;
		}
		a[i+1]=item;
		printf("\nShowing passes\n");
		dsp(a,n);
	}
	printf("\nNumber of shifting=%d",c);
}
void main()
{
	char a[50],c;
	int i=0,n=0;
	printf("Enter alphabets-press enter to terminate\n");
	while((c=getchar())!='\n')
	{	
		n++;
		a[i]=c;
		i++;
	}
	a[i]='\0';
	dsp(a,n);
	insertion(a,n);
	printf("\nOrdered alphabets are:\n");
	dsp(a,n);
}

#include<stdio.h>
void display(char *a,int n)
{
	int i;

	for(i=0;i<n;i++)	
		printf("%c ",a[i]);
}
void selection(char *b,int n)
{
 	int i,j,temp,c=0;
	 for(i=0;i<n-1;i++)
	 {
	 	for(j=i+1;j<n;j++)
	 	{
	 		c++;
	 		printf("\nshowing pass\n");
	 		display(b,n);
	 		if(b[i]>b[j])	
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			} 					
	 	}	
	 		printf("\nshowing pass\n");
	 	display(b,n);
	 }	
	 printf("\nnumber of comparisons=%d\n",c);
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
	display(a,n);
	selection(a,n);
	printf("\nOrdered alphabets are:\n");
	display(a,n);
}

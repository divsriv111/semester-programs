#include<stdio.h>
void main()
{
	int n,i,j;
	printf("Enter size of the array\n");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements plz....\n");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	printf("\nOriginal Array\n");
	for(i=0;i<n;i++)
	 printf("%d ",a[i]);
	 int b[n];
	 b[0]=0;
	for(i=1;i<n;i++)
	 b[i]=b[i-1]+a[i-1];
    printf("\nModified array is\n");
	 	for(i=0;i<n;i++)
	 	printf("%d ",b[i]);
	 	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],i,sum=0;
	printf("Enter the elements plz...\n");
	for(i=0;i<10;i++)
	 scanf("%d",&arr[i]);
	printf("Entered Array is :-\n");
	for(i=0;i<=9;i++)
	 printf("%d ",arr[i]);
	for(i=0;i<=9;i++)
	 sum=sum+arr[i];
	printf("\nSum of array elements is - %d",sum);
     getch();
}

#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,t,n;
	printf("Enter size of the array\n");
	scanf("%d",&n);
	 int a[n]; 
	printf("Enter elements now\n");
	for(i=0;i<n;i++)
	 scanf("%d",&a[i]);
	printf("Original array is\n");
	for(i=0;i<n;i++)
	 printf("%d ",a[i]);
	for(i=0;i<=n;i++)
	{
	 for(j=0;j<n;j++)
	  {
		if(a[j]>a[j+1])
		 {
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
	   	}
	}
}
printf("Sorted Array is :-\n");
for(i=0;i<n;i++)
 printf("%d",a[i]);
 getch();
}

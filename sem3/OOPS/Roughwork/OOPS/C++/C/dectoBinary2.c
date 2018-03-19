#include<stdio.h>
#include<conio.h>
void main()
{
	int arr[10],l,i=0,n;
	printf("ENTER N\n");
	scanf("%d",&n);
	while(n!=0)
	{
		arr[i]=n%2;
		n=n/2;
		i++;
	}
	printf("\nBINARY:");
	for(l=i-1;l>=0;l--)
	printf("%d",arr[l]);
}

#include<stdio.h>
#include<stdio.h>
void main()
{
	int i,j,k,n;
 printf("Enter a no. plz.....\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 	for(j=1;j<=n-i;j++)
 	 printf(" ");
 	for(k=i;k>=1;k--)
 	 printf("%d",k);
    for(j=2;j<=i;j++)
	printf("%d",j);
		printf("\n");  
 }
 getch();
}

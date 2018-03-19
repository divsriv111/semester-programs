#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,t[100],ar[100],n,c=0;
	
	printf("input size of array");
	scanf("%d",&n);
	printf("input array elements");
	for(i=0;i<n;i++)
	scanf("%d",&ar[i]);
	
	
	for(i=0;i<n;i++)
	{
		if(c%2!=0)
		{
			t[c]=0;
			i=i-1;
			}
			else
			t[c]=ar[i+1]-ar[i];
			c++;
		
		
		}
		for(i=0;i<=n*2;i++)
		printf("%d\n",t[i]);
		
		getch();
	    	return 0;
	}

	


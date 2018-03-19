#include<stdio.h>
void quick(int a[],int l,int r)
{
	int nl=l,nr=r,temp,amid,i;
	amid=a[(l+r)/2];
	do
	{
		while(nl<r&&amid>a[nl])
		nl++;
		while(nr>l&&amid<a[nr])
		nr--;
		if(nl<=nr)
		{
			temp=a[nl];
			a[nl]=a[nr];
			a[nr]=temp;
			nr--;
			nl++;
		}
	}while(nl<=nr);
	if(nl<r)
	quick(a,nl,r);
	if(nr>l)
	quick(a,l,nr);
	
	
}
void main()
{
	int a[10],i;
	printf("Enter elements\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	quick(a,0,9);
	for(i=0;i<10;i++)
	printf("%d\t",a[i]);
	
	
}

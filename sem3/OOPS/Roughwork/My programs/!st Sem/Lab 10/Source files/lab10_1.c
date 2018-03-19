#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m,n,p,y=4;
	for(i=1;i<=5;i++)
	{
		for(j=5-i;j>=1;j--)
		{
			printf(" ");
		}
	    for(k=1;k<=i;k++)
	    {
		printf("%d ",i);
	    }
	printf("\n");
}
for(m=1;m<=4&&y>=1;m++&&y--)
{
	for(n=1;n<=m;n++)
	{
		printf(" ");
	}
    for(p=4;p>=m;p--)
    {
    	printf("%d ",y);
    }
    printf("\n");
}
	getch();
}

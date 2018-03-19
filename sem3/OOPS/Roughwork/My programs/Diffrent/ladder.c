
#include<stdio.h>
void main()
{
	int i,j,k,p=0,s=4;
for(i=1;i<=30;i++)
{
	if(i%2!=0)
	{
	for(j=1;j<=p;j++)
		printf(" ");
	for(j=1;j<=5;j++ )
         {
         printf("-");
		 for(k=1;k<=30000000;k++)
		 continue;
         }
    p=p+4;
    printf("\n");
	 }
	else
	{
	for(j=1;j<=s;j++)
	printf(" ");
	printf("|");
	s=s+4;
	printf("\n");
	}
}
}

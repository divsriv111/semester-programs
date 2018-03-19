#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m,s=3;
	for(i=0;i<=6;i++)
	{
		for(j=65;j<=71-i;j++)
		{
		 printf("%c",j);	
		}
		if(i==0||i==1)
		{
		for(k=0;k<i;k++)
		{
         printf(" ");
		}
		}
		else 
		{
		for(k=0;k<s;k++)
		{
         printf(" ");
		}s=s+2;
			}	
		if(i==0)
		
	{ for(m=70;m>=65;m--)		
		{
		printf("%c",m);
	}
	}
	   else
	   { for(m=71-i;m>=65;m--)		
		{
		printf("%c",m);
		}}
		printf("\n");
    }
    	getch();
}

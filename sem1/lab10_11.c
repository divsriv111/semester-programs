#include<stdio.h>
int main()
{
	
	int i,j,k,c=-3;
	for(i=1;i<=7;i++)
	{
		
		
		if((i==1)||(i==7))
		{
			for(j=1;j<=13;j++)
			printf("*");
		}
		else if((i>=2)&&(i<=4))
		{
			
			c=c+4;
			for(k=1;k<=(13-c)/2;k++)
			printf("*");
			for(k=1;k<=c;k++)
			printf(" ");
		
			for(k=1;k<=((13-c)/2);k++)
			printf("*");	
			
		}
		else if((i==5)||(i==6))
		{
			c=c-4;
			for(k=1;k<=((13-c)/2);k++)
			printf("*");	
			for(k=1;k<=c;k++)
			printf(" ");
			
			for(k=1;k<=((13-c)/2);k++)
			printf("*");	
		}
		
		
		
		
		
	printf("\n"); 	
	
	}
	
}

#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
		if(i==0||i==4||j==0)
		{ 
			printf("%c",176);
			for(k=1;k<=30000000;k++)
		{
		continue;	}
	}
		else
		printf(" ");
			
		}
		printf("\n");   /* for"c" */
	}
		printf("\n");
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
	     if(i==0||j==0||i==4||j==4)
	     {
		 	printf("%c",2);
		for(k=1;k<=30000000;k++)
		{
		continue;	}
		}
		else
		printf(" ");
			
		}
		printf("\n");    /* for"O" */
	}
		printf("\n");  
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=4;j++)
		{
			if(j==0||j==4||(i==1&&j==1||(i==2&&j==2)||(i==1&&j==3)))
			 {
		 	printf("%c",15);
		for(k=1;k<=30000000;k++)
		{
		continue;	}
		}
		else
		printf(" ");
			
		}
		printf("\n");
	}		
		printf("\n");      /* for"M" */
	
		for(i=0;i<=4;i++)
    	{
		for(j=0;j<=4;j++)
		{
			if(i==0||i==2||j==0||(i==1&&j==4))	
			 {
		 	printf("%c",4);
		for(k=1;k<=30000000;k++)
		{
		continue;	}
		}
		else
		printf(" ");
			
		}
		printf("\n");     /* for"P" */ 
	}		
		printf("\n");
	 	for(i=0;i<=4;i++)
    	{
		for(j=0;j<=4;j++)
		{
			if(i==4||j==0||j==4)
			 {
		 	printf("%c",1);
		for(k=1;k<=30000000;k++)
		{
		continue;	}
		}
		else
		printf(" ");
			
		}
		printf("\n");       /* for"U" */
	}		
		printf("\n");
		for(i=0;i<=4;i++)
    	{
		for(j=0;j<=4;j++)
		{		
			if(i==0||j==2)
			{
		 	printf("%c",6);
		for(k=1;k<=30000000;k++)
		{
		continue;	}
		}
		else
		printf(" ");
			
		}
		printf("\n");       /* for"T" */
	}		
		printf("\n");
		for(i=0;i<=4;i++)
    	{
		for(j=0;j<=4;j++)
		{		
		if(i==0||j==0||i==2||i==4)
			{
		 	printf("%c",5);
		for(k=1;k<=30000000;k++)
		{
		continue;	}
		}
		else
		printf(" ");
			
		}
		printf("\n");       /* for"E" */
	}		
			printf("\n"); 
		for(i=0;i<=5;i++)
    	{
		for(j=0;j<=4;j++)
		{		
		if(i==0||j==0||i==2||(i==1&&j==4)||(i==3&&j==2)||(i==4&&j==3)||(j==4&&i==5))
		{
		 	printf("%c",3);
		for(k=1;k<=30000000;k++)
		{
		continue;	}
		}
		else
		printf(" ");
			
		}
		printf("\n");       /* for"R" */
	}		
	getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,k,m,l,b;
	printf("Enter Length & Breadth of rectangle respectively\n");
	scanf("%d\n%d",&l,&b);
	  for(i=1;i<=l;i++)
	    printf("*");
	  printf("\n");
      for(j=1;j<=b-2;j++)
	  {
		for(k=1;k<=l;k++)
		{
		  if(k==1||k==l)
		   	printf("*");
		else
		    printf(" ");
	    }
	   printf("\n");
	  }
	  for(m=1;m<=l;m++)
	    printf("*");
	  getch();
}

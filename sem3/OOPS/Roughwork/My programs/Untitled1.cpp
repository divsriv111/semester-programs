#include<stdio.h>
#include<conio.h>
int main()
{
 int i,j,k,l;
 for(i=0;i<=4;i++)
 {
	for(j=4;j>i;j--)
     {printf(" ");}
	 for(k=1;k<=i;k++)
	 {
	  for(l='92';;l--)
	   {printf(" %d",k);}	
	 printf("\n");}
 }
 getch();return 0;
}

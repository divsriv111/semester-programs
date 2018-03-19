#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,aa,bb,t;
 printf("Enter size of 1st array and 2nd respectively\n");
 scanf("%d %d",&aa,&bb);
 int a[aa],b[bb];
 printf("\nEnter elements of 1st array\n" );
 for(i=0;i<aa;i++)
  scanf("%d",&a[i]);
 printf("\nEnter elements of 2nd array\n");
  for(i=0;i<bb;i++)
  scanf("%d",&b[i]);
   int c[aa+bb];
   	for(i=0;i<aa;i++)
   	c[i]=a[i];
 for(i=0;i<bb;i++)
 c[aa+i]=b[i];
 	for(i=0;i<=(aa+bb);i++)
	{
	 for(j=0;j<(aa+bb);j++)
	  {
		if(c[j]>c[j+1])
		 {
			t=c[j];
			c[j]=c[j+1];
			c[j+1]=t;
	   	}
	}
}
 printf("\nMerged and sorted array is\n");
for(i=0;i<(aa+bb);i++)
 printf("%d",c[i]);
 
 getch();
 
}

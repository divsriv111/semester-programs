#include<stdio.h>
#include<conio.h>
void main()
{	
	static int terms;
	int new,old=0,current=1;
	printf("%d\t%d\t",old,current);
	
	for(terms=2;terms<25;terms++)
	{
		new=old+current;
		printf("%d\t",new);
	}
	getch();
}

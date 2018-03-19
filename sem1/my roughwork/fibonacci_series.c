#include<stdio.h>
#include<conio.h>
void fibo(int,int);
int main()
{
	int i,t,old=0,current=1,new;
	printf("%d\t%d\t",old,current);
	fibo(old,current);
	getch();
	return 1;
}
void fibo(int old,int current)
{
	static int terms=2;
	int new;
	
	if(terms<20)
	{
		new=old+current;
		
		printf("%d\t",new);
		terms=terms+1;
		fibo(current,new);
	}
	else
	return;
}

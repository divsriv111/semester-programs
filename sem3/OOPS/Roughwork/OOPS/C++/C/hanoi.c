#include<stdio.h>
void hanoi(int n,int A,int B,int C)
{
	if(n>0)
	{
		hanoi(n-1,A,C,B);
		printf("\n Disk shifts from %d to %d",A,C);
		hanoi(n-1,B,A,C);
	}
}
void main()
{
	int n=3,a=1,b=2,c=3;
	hanoi(n,a,b,c);
}

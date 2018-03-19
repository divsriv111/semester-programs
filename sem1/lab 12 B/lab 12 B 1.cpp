#include<stdio.h>
int fact(int);
int main()
{int n,s;
	printf("enter a no\n");
	scanf("%d",&n);
	s=fact(n);
	printf("factorial=%d",s);
}
  int fact(int t)
{
static int f=1;
	if(t>0)
	{
	f=f*t;
	fact(t-1);
    }
    return f;
}

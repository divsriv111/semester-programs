#include<stdio.h>
int hcf(int a,int b)
{
	int min,c;
	min=a;
	if(min>b)
	min=b;
	while(min!=0)
	{
		if((a%min==0)&&(b%min==0))
		{c=1;
		break;
		}
		min--;
	}
	if(c==1)
	printf("gcd is %d",min);
	return 0;
}
int main()
{
	int a,b;
	printf("input two nmbers");
	scanf("%d%d",&a,&b);
	hcf(a,b);
	
	
	}


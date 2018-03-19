#include<stdio.h>
int arr[]={999,999,999},pf=0;
void shift(int n)
{
	arr[0]=arr[1];
	arr[1]=arr[2];
	arr[2]=n;
}
void print()
{
	int i;
	printf("\n");
	for(i=0;i<3;i++)
	{
		if(arr[i]!=999)
		printf("%d\n",arr[i]);
	}
}
int check(int n)
{
	if(arr[0]==n || arr[1]==n || arr[2]==n)
	return 1;
	else return 0;
}
void main()
{
	int s[100],l,n=0,j=0,i;
	printf("ENter page refrence string (press 999 to terminate)\n");
	while(1)
	{
		scanf("%d",&l);
		if(l==999)
		break;
		s[n++]=l;
	}
	for(i=0;i<n;i++)
	printf("%d ",s[i]);
	for(i=0;i<n;i++)
	{
		if(!check(s[i]))
		{
			if(j==2)
			{
				shift(s[i]);
			}
			else
			{
				arr[j++]=s[i];
			}
			pf++;
		}
		print();
	}
	printf("\n\nnumber of page faults : %d",pf);
}

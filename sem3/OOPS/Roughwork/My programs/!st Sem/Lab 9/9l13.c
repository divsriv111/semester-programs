#include<stdio.h>
void main()
{
int n,i,j;
printf("enter range");
scanf("%d",&n);
for(i=1;i<n;i++)
{
j=2;
while(j<=i)
{
if(i%j==0)
break;
j++;
}
if(i==j)
printf("%d   ",i);
}
}


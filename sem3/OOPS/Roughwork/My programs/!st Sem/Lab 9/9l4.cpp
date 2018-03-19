           #include<stdio.h>
void main()
{
int n,p=1;
printf("enter number");
scanf("%d",&n);
for(p=1;p<=n;p++)
{
if(n%p==0)
printf("the divisor is %d \n",p);
}
}

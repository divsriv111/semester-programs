#include<stdio.h>
int main()
{
int n,p=1,pos=0,neg=0,z=0,x;
do
{
printf("enter  number");
scanf("%d",&n);
if(n>0)
pos++;
else if(n<0)
neg++;
else if(n==0)
z++ ;
printf("do you want to continue enter \n  1 for yes and \n 0 for no");
scanf("%d",&x);
}
while(x==1);
printf("the number of positive number %d \n",pos);
printf("the number of negative number %d \n",neg);
printf("the number of zeros %d",z);
return 0;
}


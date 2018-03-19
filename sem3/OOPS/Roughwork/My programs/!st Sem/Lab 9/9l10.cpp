#include<stdio.h>
int main()
{
int n,dig,rev=0,p;
printf("enter number");
scanf("%d",&n);
p=n;
while(n>0)
{
dig=n%10;
rev=rev*10+dig;
n=n/10;
}
if(rev==p)
printf("the number is palindrome");
else
printf("the number is not palindrome");
return 0;
}

#include<stdio.h>
int main(){
int n1,n2,gcd;
printf("\nEnter two numbers: ");
scanf("%d %d",&n1,&n2);
gcd=findgcd(n1,n2);
printf("\nGCD of %d and %d is: %d",n1,n2,gcd);
getch();
return 0;
}
int findgcd(int x,int y){
while(x!=y){
if(x>y)
return findgcd(x-y,y);
else
return findgcd(x,y-x);
}
return x;
}

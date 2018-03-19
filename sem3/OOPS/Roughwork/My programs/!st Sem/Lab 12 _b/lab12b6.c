#include<stdio.h>
int isPrime(int);
int main(){
int num,prime;
printf("Enter a positive number: ");
scanf("%d",&num);
prime = isPrime(num);
if(prime==1)
printf("%d is a prime number",num);
else
printf("%d is not a prime number",num);
getch();
return 0;
}
int isPrime(int num){
static int i=2;
if(i<=num/2){
if(num%i==0)
return 0;
else{
i++;
isPrime(num);
}
}
return 1;
}

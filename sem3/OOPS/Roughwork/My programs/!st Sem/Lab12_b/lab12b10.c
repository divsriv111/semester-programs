#include<stdio.h>
int multiply(int,int);
int main(){
int a,b,product;
printf("Enter any two integers: ");
scanf("%d%d",&a,&b);
product = multiply(a,b);
printf("Multiplication of two integers is %d",product);
getch();
return 0;
}
int multiply(int a,int b){
static int product=0,i=0;
if(i < a){
product = product + b;
i++;
multiply(a,b);
}
return product;
}

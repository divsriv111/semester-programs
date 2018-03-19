#include<stdio.h>
#include<conio.h>
#define SIZE 100
struct stack
{
	int top;
	char awe[SIZE];	
}st;

void push(char k)
{
 if(st.top >= SIZE-1)
 {
  printf("\nStack Overflow\n");
 }
 else
 {
  st.top = st.top+1;
  st.awe[st.top] = k;
 }
}
char pop()
{
 char k;
 if(st.top <= -1)
 {
  printf("\nStack Underflow\n");
 }
 else
 {
  k = st.awe[st.top];
  
  st.top = st.top-1;
 }
 return(k);
}
int op(char k)
{
 if(k == '^' || k == '*' || k == '/' ||  k == '+' || k == '-')
 {
  return 1;
 }
 else
 {
  return 0;
 }
}
int prior(char ep)
{
 if(ep == '^')
 {
  return(3);
 }
 else if(ep == '*' || ep == '/')
 {
  return(2);
 }
 else if(ep == '+' || ep == '-')
 {
  return(1);
 }
 else
 {
  return(0);
 }
}


int main()
{
 int i;
 int j;
 char in[SIZE],pr[SIZE];
 char current;
 char x;
	
 printf("\nEnter Infix expression: \n");
 gets(in);
 i=0;
 j=0;
 strrev(in);
 current=in[i++];
 while(current != '\0')
 {
  if(current == ')')
  {
   push(current);
  }
  else if((current >= 'A'  && current <= 'Z') || (current >= 'a' && current <= 'z'))
  {
   pr[j++] = current;
  }
  else if(op(current) == 1)
  {
   x=pop();
   while(op(x) == 1 && prior(x) >= prior(current))
   {
    pr[j++] = x;
    x = pop();
   }
   push(x);
   push(current);			
  }
  else if(current == '(')
  {
   x = pop();
   while(x != ')')
   {
    pr[j++] = x;
    x = pop();
   }
  }
  else
  {
   printf("\nInvalid Expression\n");
   getch();

  }
  current = in[i++];
 }
  pr[j++] = '\0';
   strrev(pr);
  printf("\nPrefix expression : ");
  puts(pr);
 getch();
}

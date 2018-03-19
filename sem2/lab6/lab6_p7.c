#include<stdio.h>
#include<conio.h>
#define MAX 20
struct stack
{
    int data[MAX];
    int top;
}s;
int wow(char x,int op1,int op2)
{
    if(x=='+')
        return(op1+op2);
    if(x=='-')
        return(op1-op2);
    if(x=='*')
        return(op1*op2);
    if(x=='/')
            return(op1/op2);
    if(x=='%')
            return(op1%op2);
    if(x=='^')
    		return(pow(op1,op2));
}
void push(int x)
{
    s.top=s.top+1;
    s.data[s.top]=x;
}
int pop()
{
    int x;
    x=s.data[s.top];
    s.top=s.top-1;
    return(x);
}
void main()
{

    char x;int k;
    int op1,op2,val;
    s.top=-1;
    printf("Enter the postfix expression :");
    while((x=getchar())!='k')
    {k=x;
        if((k>=48)&&(k<=57))
               push(k-48);     
        else
        {
            op2=pop();
            op1=pop();
            val=wow(x,op1,op2);
            printf("\n%d",val);
            push(val);
            
        }
    }

    printf("\n\nFinal value :\n%d",pop());
    getch();
}

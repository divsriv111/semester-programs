#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define size 20
struct stack
{
    int *d[200];
    int top;
}s;
int push(char *k)
{
	int j;
	if(s.top!=size-1)
	{
		s.top=s.top+1;
		j=0;
		while(*(k+j)!='\0')
		{
			s.d[s.top][j]=*(k+j);
			j=j+1;
		}
		s.d[s.top][j]='\0';
	}
		else printf("stack overflow");
} 

char *pop()
{
	int i=0;
	char *k;
	if(s.top!=-1)
	 {
		k=(char *)malloc(100*sizeof(char));
		strcpy(k,s.d[s.top]);
			s.top=s.top-1;
			return k;}
	 else printf("stack underflow");
} 
void main()
{
	int i,j;
	char current;
	char po[100],a[100],b[100],c[100],in[100];
    char x;int k;
    int op1,op2,val;
    s.top=-1;
    printf("Enter the postfix expression :");
	gets(po);i=0,j=0;
	current=po[i++];
	while(current!='\0')
    {
      	if((current>= 'a' && current<='z')||(current<= 'A' && current>= 'Z'))
               push(current);     
        else
        {
            b=pop();
            c=pop();
           	strcpy(a,c);
            strcat(a,current);
			strcat(a,b);
            push(a);
            printf("\n%d",val);
        }
        current=po[i++];
    }
   in=pop();
   puts(in);
    getch();
}

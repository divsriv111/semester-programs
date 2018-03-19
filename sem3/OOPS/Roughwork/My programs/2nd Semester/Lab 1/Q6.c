#include<stdio.h>
#include<string.h>
char rev(char[],int);
void main()
{
    printf("Enter a String\n");
    char st[100];
    gets(st);
    int l=strlen(st);
    st[l];
    rev(st,l);
}
char rev(char st[],int pop)
{
    int i,temp='\0';
    for(i=0;i<pop/2;i++)
    {
        temp=st[i];
        st[i]=st[pop-i-1];
        st[pop-i-1]=temp;
    }
    printf("Reversed String is %s",st);
}


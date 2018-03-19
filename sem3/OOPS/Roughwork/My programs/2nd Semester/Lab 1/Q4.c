#include<stdio.h>
int prime(int);
void main()
{
    int pop;
    printf("Enter a no.\n");
    scanf("%d",&pop);
    prime(pop);
}
int prime(int pop)
{
    int i,c=0;
    for(i=2;i<pop;i++)
    {
        if(pop%i==0)
        {
            printf("Inputted no. is not prime");
            break;
        }
        else c++;
    }
    if(c==pop-2)
        printf("No. is prime");
}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct process{
int at;
int bt;
}pro_obj[10];

int n,cplt[10];
int return_small_at()
{
int i,temp2=99,temp;
for(i=0;i<n;i++)
{
if(temp>pro_obj[i].at)
{temp2=i;
temp=pro_obj[temp2].at;
}
}
pro_obj[temp2].at=1000;
return temp2;
}

void main()
{
int i,next,temp;
printf("ENter the number of processes \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\nEnter arrival time for process %d: ",i+1);
scanf("%d",&pro_obj[i].at);
printf("\nEnter burst time of the process %d: ",i+1);
scanf("%d",&pro_obj[i].bt);
}
printf("\norder of completion is : \n");
for(i=1;i<=n;i++)
{
temp=return_small_at();
cplt[i]=cplt[i-1]+pro_obj[temp].bt;
printf("p%d <- ",temp+1);
}
printf("\n The corrsponding completion time is :\n");
for(i=1;i<=n;i++)
printf(" %d ",cplt[i]);
getch();
}

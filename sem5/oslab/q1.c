#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Process{
char process[20];
char time[20];
struct Process *next;
}*head;
typedef struct Process pro;
void main()
{
int i;
char time[9],name[10];
pro *ptr=head;
pro *head=(pro*)malloc(sizeof(pro));
while(1)
{
printf("enter your choice\n1)Enter process\n2)print process\n3)exit\n");
scanf("%d",i);

if(i==1)
{
pro *temp=(pro*)malloc(sizeof(pro));
printf("enter process name\n");
scanf("%s",*temp->process);
//strcpy(*temp->process,name);
printf("enter process time(hh:mm:ss)\n");
gets(time);
scanf("%s",*temp->time);
*temp->next=NULL;
*ptr=*temp;
*ptr=*ptr->next;
}
if(i==2)
{
*ptr=*head;
while(*ptr->next!=NULL)
printf("\nProcess name : ");
puts(*ptr->process);
printf("\nProcess time : ");
puts(*ptr->time);
*ptr=*ptr->next;
}
if(i==3)
{
*ptr=*head;
while(*ptr->next!=NULL)
{
pro *temp;
temp=ptr;
*ptr=*ptr->next;
free(temp);
}
return 0;}
else
{printf("wrong choice!!");
continue;}
}
return 0;
}

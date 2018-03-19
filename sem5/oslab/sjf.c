#include<stdio.h>
int wt[20],bt[20],p[20],ar[20],tat[20],service_time[20],n;
void findwt()
{
	int i,j;
	for(i=1;i<n;i++)
	{
		service_time[i]=service_time[i-1]+bt[i-1];
		wt[i]=service_time[i]-ar[i];
		if(wt[i]<0)
		wt[i]=0;
	}
	
}
void findtat()
{
	int i;
	for(i=0;i<n;i++)
	{
		tat[i]=bt[i]+wt[i];
	}
}
void sort()
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]>ar[j])
			{
				temp=ar[i];
				ar[i]=ar[j];
				ar[j]=temp;
				
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
				
				temp=bt[i];
				bt[i]=bt[j];
				bt[j]=temp;
			}
		}
	}
	for(i=1;i<n;i++)
	{
		if(ar[i]==ar[i-1]&&bt[i]<bt[i-1])
		{
			
		}
	}
}
void print()
{
	int i,t_wt=0,t_tat=0;
	printf("\nProcesses\tA.T\t\tB.T\t\tW.T\t\tTAT\n");
	for(i=0;i<n;i++)
	{
		printf("p[%d]\t\t%d\t\t%d\t\t%d\t\t%d\n",p[i],ar[i],bt[i],wt[i],tat[i]);
	}
	for(i=0;i<n;i++)
	t_wt=wt[i]+t_wt;
	for(i=0;i<n;i++)
	t_tat+=tat[i];
	printf("\nAvg turnaround time : %f",(float)t_tat/(float)n);
	printf("\nAvg waiting time : %f",(float)t_wt/(float)n);
}
void main()
{
	int i;
	printf("Enter number of processes : ");
	scanf("%d",&n);
	printf("\nEnter arrival time and burst time of the processes :\n");
	for(i=0;i<n;i++)
	{
		printf("For process[%d] : ",i+1);
		scanf("%d%d",&ar[i],&bt[i]);
		p[i]=i+1;
	}
	sort();
	findwt();
	findtat();
	print();
}

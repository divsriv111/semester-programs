#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<sys/types.h>
#include<error.h>
int main()
{
	int fd[2],nbytes;
	int a,b,sum=0;
	int readbuffer[3];
	pid_t childpid;
	pipe(fd);
	if((childpid=fork())==-1)
	{
		perror("fork");
		exit(1);
	}
	if(childpid==0)
	{
		close(fd[0]);
		printf("\nEnter two numbers a and b\n");
		scanf("%d%d",&a,&b);
		sum=a+b;
		write(fd[1], &sum, sizeof(sum));
		exit(0);
	}
	else{
		close(fd[1]);
		nbytes=read(fd[0],readbuffer,sizeof(readbuffer));
		printf("Child : sum: %d",readbuffer[0]);
	}
	return 0;
	
}

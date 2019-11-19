#include "my.h"
int main()
{
int pid,s;
if((pid==fork())<0)
	{
		perror("failed to fork@\n");
		return -1;
	}
	else if(pid==0)
	{
		printf("%d:child is running now!\n",getpid());
		
		printf("%d:child is exit now!\n",getpid());
		exit(120);
	}
	else
	{
		printf("%d:parent is waiting zombie now\n",getpid());
		while((pid=wait(&s))!=-1)
		{
			printf("%d:parent is exit now!\n",getpid());
			if(WIFEXITED(s))
			{
				printf("child is exiting normally.exit code=%d\n",WEXSTATUS(s));
			}
			else if(WIFSIGNALED(s))
			{
				printf("child %d exit by signal.signal no=%d\n",pid,WTERMSIGNALED(s));	
			}
			else
			{
				printf("Not know!\n");
			}
		}
			
		
	}
	exit(0);
}

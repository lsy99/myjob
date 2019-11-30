#include"my.h"
int main()
{

	pid_t r;
	int r_num;
	int pipefd[2];
	char buf[4096];
	memset(buf,0,sizeof(buf));
	if(pipe(pipefd)<0)
	{
		perror("pipe failed.\n");
		return -1;
	}
	r=fork();
	if(r<0)
	{
		perror("fork failed.\n");
		return -1;	
	}
	else if(r==0) //子进程
	{	
		sleep(5);
		close(pipefd[1]);
		if(r_num=read(pipefd[0],buf,10)>0)
			printf("child read from pipe:%s,total=%d\n",buf,r_num);
		close(pipefd[0]);
		exit(0);	
	}
	else{//父进程
		close(pipefd[0]);
		int i=1;
		while(write(pipefd[1],"1",1)!=-1)
		{
			printf("%d\n",i);
			i++;
		
		}
		close(pipefd[1]);	
		return 0;
		}
	
}

#include <unistd.h>
#include <stdlib.h>
#include<signal.h>
#include<sys/param.h>
#include<sys/stat.h>
void init_deamon(void)
{
	pid_t child1,child2;
	int i;
	child1=fork();
	if(child1>0)
		exit(0);
	else if(child1<0)
	{
		perror("创建子进程失败!");
		exit(1);
	}
	setsid();
	chdir("/tmp");
	umask(0);
	for(i=0;i< NOFILE;++i)
	close(i);
	return;
}

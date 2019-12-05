#include"my.h"
#define PROMPT "DO you want terminate program?"
char *prompt=PROMPT;
void ctrl_c(signo)
{
	write(STD_FILENO,prompt,strlen(prompt));
}
void sigtoutine (int duno)
{
	switch(duno)
	{
		case 1:
			printf("Get a signal SIGHUP\n");
			break;
		case 2:
			printf("Get a signal SIGHUP\n");
			break;
		case 3:
			printf("Get a signal SIGHUP\n");
			break;
	}

}

int main()
{
	
	struct sigaction act;
	act.sa_handler=ctrl_c;
	sigemptyset(&act.sa_mask);
	act.sa_flag=0;
	if(sigaction(SIGINT,&act,NULL)<0)
	{
	fprintf(stderr,"Install Signal Action Error:%s\n",strerror(errno));
	exit(1);
	}
	printf("process id is %d\n",getpid());
	while(1);
	
	
}

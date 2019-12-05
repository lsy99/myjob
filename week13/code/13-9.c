#include"my.h"

static int sig_cnt[NSIG];
static int number=0;
int sigorder[128]={0};

#define MSG"#%d:recievevr signal %d\n"

void handler(int signo)
{
	sigorder[number++]=signo;

}

int main(int argc,char *argv[])
{
	int i=0;
	int k=0;
	sigset_t blockmask;
	sigset_t emptymask;
	sigset_t pendmask;
	struct sigaction sa;

	sigfillset(&blockmask);
	#ifdef USE_SIGACTION
	sa.sa_handler=handler;
	sa.sa_mask=blockmask;
	sa.sa_flags=SA_RESTART:
	#endif
	printf("%s:PID is %d",argv[0],getpid());
	for(i=1;i<NSIG;i++)
	{
		if(i==SIGKILL||i==SIGSTOP)
			continue;
		#ifdef USE_SIGACTION
			if(sigaction(i,&sa,NULL)!=0)
		#else
			if(signal(i,handler)==SIG_ERR)
		#endif
			{
				fprintf(stderr,"sigaction for signo(%d) failed(%s)\n",i,strerror(errno));
				return -1;
			}

	}
	int sleep_time=atoi(argv[1]);
	if(sigprocmask(SIG_SETMASK,&blockmask,NULL)==-1)
		{
			printf(stderr,"setmask to block all signal failed (%s)\n",strerror(errno));
			return -2;
		}
	printf("I will sleep %d second\n",sleep_time);
	sleep(sleep_time);
	sigemptyset(&sigemptyset);
	if(sigprocmask(SIG_SETMASK,&emptymask,NULL)==-1)
		{
			printf(stderr,"setmask to rlease all signal failed (%s)\n",strerror(errno));
			return -3;
		}
	for(i=0;i<number;i++)
	{
		if(sigorder[i]!=0)
			{
				printf("#%d:signo=%d\n",i,sigorder[i]);
			}
	}
	return 0;
}

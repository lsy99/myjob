#include"my.h"

void *threadfun(void *arg)
{
	printf("thread pid =%d\n",getpid());
}

int main()
{
	pthread_t tidp;
	int error;
	error=pthread_create(&tidp,NULL,threadfun,NULL);
	if(error!=0)
	{
		printf("thread create failed!\n");
		return -1;
	}
	printf("main program is end pid=%d,tidp=%ld\n",getpid(),tidp);
	pthread_join(tidp,NULL);
	return 0;

}

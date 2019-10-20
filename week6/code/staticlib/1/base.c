#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>
#include <unistd.h>
#include <limits.h>
#include <fcntl.h>
void show(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%4d	:	%4d\n",i,a[i]);
}

void init(int a[],int n)
{
	int i;
	int rand_max=100;
	srand((int)time(0));
	
	//creat random num from 1 to 100
	for(i = 0;i<n;i++)
	{
		a[i] = 1 + (int)(rand()%rand_max);
	}
}




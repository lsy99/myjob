#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

struct SumAndAve{
	float ave;
	int sum;
};
void show(int *a,int number);
void create(int *a,int number);
struct SumAndAve calculate(int * a ,int number);

int compar(const void *a,const void *b);
void syssort(int *a ,int number);
void mysort(int *a ,int number);


#include"my.h"
#include<string.h>
static void men_leak(void)
{
	char *p=malloc(1);
}
static void men_leak2(void)
{
FILE *fp=fopen("test.txt","w");
}
static void mem_overrun1(void)
{
char *p=malloc(1);
*(short *)p=2;
free(p);
}
static void mem_overrun2(void)
{
}

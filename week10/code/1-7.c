#include"my.h"
int g=10;
char a[100]={0};
int main()
{
pid_t pid;
int i;
static int k=20;
printf("test:pid=%d\n&k=%16p\n&g=%16p\n&a=%16p\n",getpid(),&k,&g,a);
for(i=0;i<10;i++)
{
printf("test:g=%d,k=%d\n",g++,k++);
}
return 0;
}

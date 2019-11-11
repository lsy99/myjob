#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[],int i)
{
printf("test.c pid->%d,ppid->%d\n",getpid(),getppid());
for(i=0;i<argc;i++)
{
printf("%s\n",argv[i]);
}
return 0;
}

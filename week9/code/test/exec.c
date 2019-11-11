#include<stdio.h>
#include<unistd.h>
int main()
{
char *args[]={"/home/lsy1999/Desktop/test/test",NULL};
printf("系统分配的进程号(PID)是：%d\n",getpid());
if(execve("/home/lsy1999/Desktop/test/test",args,NULL)<0)
{
perror("用execve创建进程出错\n");
}
return 1;
}

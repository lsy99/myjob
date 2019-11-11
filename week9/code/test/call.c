#include<stdio.h>
#include<unistd.h>
int main()
{
printf("test.c pid->%d,ppid->%d\n",getpid(),getppid());
system("/home/lsy1999/Desktop/test/test");
printf("After calling:");
return 0;
}

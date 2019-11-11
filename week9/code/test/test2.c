#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
char* argv[4];
argv[0]="/home/renkean/git/linuxprogram.git/week9/code/pid/test";
argv[1]="HELLO";
argv[2]="WORLD";
argv[3]=NULL;
printf("PID=%d,PPID=%d\n",getpid(),getppid());
execv(argv[0],argv);
printf("later");
return 0;
}

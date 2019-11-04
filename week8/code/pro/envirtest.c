#include<stdio.h>
int main()
{
extern char **environ;
int i=0;
for(;environ[i];i++)
{
printf("%s\n",environ[i]);
}
return 0;
}

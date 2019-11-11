#include "my.h"

int main()
{
    char *arg[]={"./test2","aaa","bbb","ccc","ddd","eee",NULL};
    int ret;
    printf("call1:pid=%d,ppid=%d\n",getpid(),getppid());
    ret=execvp("test2",arg);
    printf("after calling! ret=%d\n",ret);
    return 0;
}

#include "my.h"

int main()
{
    int ret;
    printf("call1:pid=%d,ppid=%d\n",getpid(),getppid());
    ret=system("./test2 aaa bbb ccc ddd eee");
    printf("after calling! ret=%d",ret);
    return 0;
}

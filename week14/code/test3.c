#include"my.h"
//int i=0;
void foo(int i)
{
	//int buffer[256]={0};	
	i=i+1;
	printf("i=%d\n",i);
	foo(i);

}

int main()
{
int a=0;
foo(a);
return 0;

}

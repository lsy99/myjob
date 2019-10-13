#include "header.h"

void show(int *a ,int number){
	int i;
	for(i=0;i<number;i++)
		printf("a[%d]=%d\n",i,a[i]);

}

void create(int *a,int number){
	int i;
	srand((int)time);
	for(i=0;i<number;i++)
		a[i]=1+(int)(1000.0*rand()/(RAND_MAX+1.0));
}

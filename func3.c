#include "header.h"

int compar(const void *a ,const void *b){
	int *aa=(int *) a,*bb=(int *)b;
	if(*aa>*bb) return 1;
	if(*aa==*bb) return 0;
	if(*aa<*bb) return -1;

}
void syssort(int *a ,int number){
	struct timeval tv1,tv2;
	struct timezone tz;
	gettimeofday(&tv1,&tz);
	qsort(a,number,sizeof(int),compar);
	gettimeofday(&tv2,&tz);
	printf("The syssort tasted time is:%d\n",tv2.tv_usec-tv1.tv_usec);
	show(a,number);
}

void mysort(int *a ,int number){
	int m,n; 
	int i=0;
	struct timeval tv1,tv2;
	struct timezone tz;
	gettimeofday(&tv1,&tz);
	for(m=0;m<number;m++){
		for(n=0;n<number-m-1;n++){
			if(a[n]>a[n+1])
			{
				i=a[n+1];
				a[n+1]=a[n];
				a[n]=i;
			}
		}
		
	}
	gettimeofday(&tv2,&tz);
	printf("The mysort tasted time is:%d\n",tv2.tv_usec-tv1.tv_usec);
	show(a,number);

}

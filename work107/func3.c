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
	clock_t start,finish;
	double Total_time;
	gettimeofday(&tv1,&tz);
	start=clock();
	qsort(a,number,sizeof(int),compar);
	finish=clock();
	Total_time = (double)(finish-start)/			CLOCKS_PER_SEC;
	gettimeofday(&tv2,&tz);
	printf("The syssort tasted time is:%f\n",Total_time);
	show(a,number);
}

void mysort(int *a ,int number){
	int m,n; 
	int i=0;
	struct timeval tv1,tv2;
	struct timezone tz;
	clock_t start,finish;
	double Total_time;
	gettimeofday(&tv1,&tz);
	start=clock();
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
	finish=clock();
	Total_time = (double)(finish-start)/			CLOCKS_PER_SEC;
	gettimeofday(&tv2,&tz);
	printf("The mysort tasted time is:%f\n",Total_time);
	show(a,number);

}

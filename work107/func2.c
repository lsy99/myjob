#include "header.h"

struct SumAndAve calculate(int * a ,int number){
	
	struct SumAndAve x;

	int i;
	x.ave=0.0;
	x.sum=0;
	for(i=0;i<number;i++)
	{
		x.sum= x.sum + a[i];

	}
	x.ave=x.sum/number;
	
	return x;
}

void show2(int *a , int number){
	

	int i;
	float ave=0.0;
	int sum=0;
	for(i=0;i<number;i++)
	{
		sum= sum + a[i];
	}
	ave=sum/number;
	printf("\nsum=%d,ave=%f\n",sum,ave);

}

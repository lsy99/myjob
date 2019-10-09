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

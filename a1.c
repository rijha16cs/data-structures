#include<stdio.h>
#include<stdlib.h>
int *assignval(int *x,int val)
{
	*x=val;
	return x;
}

void main()
{
	int * x= malloc(sizeof(int));
	if (NULL==x)
		return;
	x=assignval(x,0);
	if(x)
	{
		x=(int *)malloc(sizeof(int));
		if(NULL==x)
			return;
		x=assignval(x,10);
	}
	printf("%d",*x);
	free(x);
}
	

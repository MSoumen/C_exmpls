#include <stdio.h>
#include <stdlib.h>
int main()
{
	int *sum,size,i,a,b;
	scanf("%d",&size);
	sum=(int*) malloc(size* sizeof(int));
	for(i=0;i<size;i++)
	{
		scanf("%d %d",&a,&b);
		sum[i]=a+b;
	}
	for(i=0;i<size;i++)
	{
		printf("\n%d",sum[i]);
	}
	free(sum);
	return 0;
	
}
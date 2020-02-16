#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int i,limit,no,isPrime;
	scanf("%d",&limit);
	//printf("1 2");
	for(no=2;no<=limit;no++)
	{
		//sqrNum=sqrt(no);
		//sqrNum++;
		isPrime=1;
		for(i=2;i<=no/2;i++)
		{
			//d=no%i;
			if(no%i==0)
			{
				isPrime=0;
				break;
			}
		//	break;
		}
		if(isPrime==1)
		printf(" %d ",no);
	}
	printf("\n");
	return 0;
}
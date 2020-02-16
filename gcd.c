#include <stdio.h>
#define N 10
int main()
{
	int arr[N],i,n,rem;
	for(i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<N;i++)
	{
		rem=arr[i]%arr[i+1];
		
		rem=arr[i+1]%rem;
		if(rem==0)
		{
			
		}
	}
}
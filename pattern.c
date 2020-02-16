#include <stdio.h>
int main()
{
	int i,j,n=5;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%2d",j);
		}
		n--;
		printf("\n");
	}
	return 0;
}
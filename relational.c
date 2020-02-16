#include <stdio.h>
int main()
{
	int A,B,T;
	scanf("%d",&T);
	while(T--)
	{
		scanf("%d %d",&A,&B);
		if(A>B)
			printf(">\n");
		else if(A<B)
			printf("<\n");
		else
			printf("=\n");
	}
	return 0;
}
#include <stdio.h>
long fact(int n)
{
	if(n==0 || n==1)
	return 1;
	else
	return (n*fact(n-1));
}
int main()
{
	int no;
	scanf("%d",&no);
	long facto=fact(no);
	printf("%ld",facto);
	return 0;
}

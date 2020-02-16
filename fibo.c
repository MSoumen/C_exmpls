#include <stdio.h>
/*int fibo(int n)
{
	int fib;
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	fib=fibo(n-1)+fibo(n-2);
	printf("%d",fib);
	return (fib);
}*/
int main()
{
	int n,first=0,second=1,s=0;
	
	printf("How many numbers want to print ?: ");
	scanf("%d",&n);
//	fib=fibo(n);
	printf("\nFibbonacchi series : ");
	printf("%d %d",first,second);  //-------- L O O P METHOD-----
	
	do{
		s=first+second;
		printf(" %d ",s);
		first=second;
		second=s;
	} while(s<n);
	printf("\n");
	return 0;
}
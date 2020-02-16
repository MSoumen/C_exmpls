#include <stdio.h>
int main()
{
	//int n;
	/*int* p;
	printf("Enter a number : ");
	scanf("%d",&i);
	p=&i;
	printf("\naddress of i is %d",p);
	printf("\naddress of p is %u",&p);
	printf("\nvalue of i is %d",i);
	printf("\nvalue of pointer p is %d",*p);
	printf("\nvalue of i is %d",*(&i));
	
//	scanf("%i",&n);
 	n=10;   
	
	while(n>=0)
	{
		printf("%3d",n);
		n--;
		
	}
	printf("\n\n");

	
	for(n=10;n>=0;n--)
	{
		printf("%3d",n);
	}*/

//------------program for store number in array--------
	int i,n,a[10];
	scanf("%d",&n);
	//a=(int)malloc()
	for(i=0;i!=-1;i++)
	{
		a[i]=n%10;
		n/=10;
		
		if(n==0)
		break;
	}
	printf("\nMax array index a[%d]\n",i);
	for(;i>=0;i--)
	{
		printf("%3d",a[i]);
	}
	
	return 0;
}
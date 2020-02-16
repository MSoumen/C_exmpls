#include <stdio.h>
void incre();
void decre();
int main()
{
	incre();
	incre();
	decre();
	decre();
	return 0;
}
void incre()
{
	static int k=1;
	printf("%d\n",k);
	k++;
}	
void decre()
{
	static int k;
	k--;
	printf("%d\n",k);
}
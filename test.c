#include <stdio.h>

int main()
{
	int i=-1,j=0,k=0,l;
	l=i++ || j++ && k++;
	printf("%d %d %d %d",i,j,k,l);
	
	return 0;
}

#include <stdio.h>
void binSearch(int key,int a[],int len)
{
	int l,r,mid;
	l=0,r=len-1;
	while(l<=r)
	{
		mid=(l+r)/2;
		if(key==a[mid])
		{
			printf("Found at %d",mid+1);
			break;
		}
		else{
			if(key<a[mid])
				r=mid-1;
			else
				l=mid+1;
		}
	}
	if(key!=a[mid])
	printf("Not found");
}
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	
	int arrayLength=sizeof(a)/sizeof(a[0]);
	binSearch(88,a,arrayLength);
	return 0;
}
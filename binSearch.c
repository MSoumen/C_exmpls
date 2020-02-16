#include <stdio.h>
void binary_search(int a[],int n,int key);

int main()
{
	int a[]={0,1,2,3,5,7,11,13,17,19,23,29,31};
	int key;
	int n=sizeof(a)/sizeof(a[0]);
	printf("search key : ");
	scanf("%d",&key);
	binary_search(a,n,key);
	return 0;
}


void binary_search(int a[],int n,int key)
{
	int low=0,high=n-1,mid;
	do
	{
		      mid=(low+high)/2;
		      
			  if(key<a[mid])
			  high=mid-1;
			  if(key>a[mid])
			  low=mid+1;
	}while(key!=a[mid] && low<=high);
	printf("\v\t");
	 
	  if(key==a[mid])
	  printf("F O U N D ! at location %d\n",mid+1);
	  else
	  printf("N O T  F O U N D !\n");
}

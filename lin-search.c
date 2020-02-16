#include <stdio.h>
void linearSearch(int arr[],int n,int key)
{
    int i;
	for(i=0;i<=n-1;i++)
	{
		if(arr[i]==key)
		{
			printf("\tF O U N D !  at position %d  \n",i+1);
			break;	
		}
	}
	if(i==n)
	printf("\n\tN O T  F O U N D  ! \n ");
}

int main()
{
	int a[]={4,5,6,1,2,3};
	int n=sizeof(a)/sizeof(a[0]);
	int key;
	printf("Key : ");
	scanf("%d",&key);
	linearSearch(a,n,key);
	return 0;
}
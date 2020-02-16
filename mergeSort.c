#include <stdio.h>
void show(int a[],int l, int r);
void merge(int a[],int low,int mid,int high);
void mergeSort(int a[],int left,int right)
{
//printf("\n start of mergeSrt with mid initial");
 
	int mid;
	if(left>=right)
	return;
	else
	{
		mid=(left+right)/2;
//		printf("\n part 1 with mid %d",mid);
		mergeSort(a,left,mid);
//		printf("\n part 2 with mid %d",mid);
		mergeSort(a,mid+1,right);
//		printf("\n end part 2 with mid %d",mid);
		merge(a,left,mid,right);
	}
//printf("\n End of mergeSrt with mid %d",mid);
}
void merge(int a[],int low,int mid,int high)
{
//printf("\n Start merging with mid %d",mid);

	int l=low,l2=mid+1,r=high,i=low;
	int tmp[100];
	while(l<=mid && l2<=high)
	{
		if(a[l]>=a[l2])
		{
			tmp[i]=a[l2];
			l2++;
		}
		else
		{
			tmp[i]=a[l];
			l++;
		}
		i++;
	} 
	if(l2>high)
	{
		for(;l<=mid;l++)
		{
			tmp[i]=a[l];
			i++;
		}
	}
	else
	{
		for(;l2<=r;l2++){
				tmp[i]=a[l2];
				i++;
				}
	}
	for(i=l;i<=r;i++)
	{
		a[i]=tmp[i];
		//printf(" %d ",a[i]);
	}
	show(a,l,r);
	//printf("\n  merging cmplt with mid %d",mid);
}
int main()
{
	int a[]={8,7,6,5,4,3,2,1};
	//int length=8;//sizeof(a)/sizeof(a[0]);
	mergeSort(a,0,7);

	return 0;
}
void show(int a[],int l, int r)
{
	for(int i=l;i<=r;i++)
	printf(" %d ",a[i]);
}
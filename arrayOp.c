#include <stdio.h>
#include <stdlib.h>

void insert_in_array(int a[],int n,int pos,int value)
{
	int i=n;//flag=0;
	while(i>=pos)
	{
		a[i+1]=a[i];
		i--;
	}
	a[pos]=value;

	i=0;
	//flag++;
	n=n+1;
	while(i<n)
	{
		printf(" %d,",a[i]);
		i++;
	}
	printf("\n");
}

void array_delete(int a[],int n,int value)
{
	int pos=0,i=0;
	while(i<n)
	{
		if(a[i]==value)
		 pos=i;

		i++;
	}
	if(pos==0)
	{
		printf("\nEntered Value not found ! ");
		exit(0);	
	}
	for(i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	printf("\nAfter deleting %d from position %d . .",value,pos);
	printf("\nArray : ");
	
	for(i=0;i<n;i++)
	{
		printf("%3d",a[i]);
	}	
}

void array_merge(int arr1[],int arr2[],int ele1,int ele2)
{
	//int arr3[15];
/*	int i=0;   ---------for unSorted arrays----
	printf("\n");
	while(i<ele1){
		arr3[i]=arr1[i];
		i++;	
	}
	while(i<(ele1+ele2))
	{
		arr3[i]=arr2[i-ele1];
		i++;
	}-----------------------------------------*/

	int m=ele1+ele2;    //_-------for sorted array---
	int index=0, index1=0,index2=0;
    int arr3[m];
    //int *arr3;
    //arr3=(int)malloc(m*sizeof(int));
	while(index1<ele1 && index2<ele2)
	{
		if(arr1[index1]<arr2[index2])
		{
			arr3[index]=arr1[index1];
			index1++;
		}
		else
		{
			arr3[index]=arr2[index2];
			index2++;
		}
		index++;
	}
	//-----if first array finished but still elements in 2nd array
	if(index1==ele1)
	{
		while(index2<ele2)
		{
			arr3[index]=arr2[index2];
			index++;
			index2++;
		}
	}
	else
	{
		while(index1<ele1)
		{
			arr3[index]=arr1[index1];
			index++;
			index1++;
		}
	}
//----- print the merged array-----
	for(int i=0;i<m;i++)
	{
		printf("%d ",arr3[i]);
	}
}

void biggest(int a[],int n1)
{
	int i,big=a[0];
	for(i=0;i<n1;i++)
	{
		if(a[i]>a[0])
		 big=a[i];
	}
	printf("\n Biggest:%d",big);
}

void smallest(int a[],int n1)
{
	int i,small=a[0];
	for(i=0;i<n1;i++)
	{
		if(a[i]<a[0])
		 small=a[i];
	}
	printf("\n Smallest:%d",small);
}

int main()
{
	int arr1[]={11,22,33,44,55,66,77,88};
	int arr2[]={1,2,3,4,5,6,7,8,9,10,12};
	//int ele1=sizeof(arr1)/sizeof(arr1[0]);	
	//insert_in_array(arr,ele1,7,555);	
	//array_delete(arr,ele1,5);
	//array_delete(arr,ele1,7);
    //int n1=8,n2=6;
    int n1,n2;
    n1=sizeof(arr1)/sizeof(arr1[0]);
    n2=sizeof(arr2)/sizeof(arr2[0]);

	//array_merge(arr1,arr2,n1,n2);

	biggest(arr1,n1);
	smallest(arr1,n1);
	
	printf("\n");
	return 0;
}
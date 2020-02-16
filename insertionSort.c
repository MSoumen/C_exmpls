
#include <stdio.h>
void print(int a[],int n){
	for(int i=0;i<n;i++){
	  	printf("%2d",a[i]);
	   }
	printf("\n");
}
void insertion(int a[],int n)
{
    int wall,box,loop;
    for(wall=1;wall<n;wall++)
    {
    	print(a,n);
    	box=a[wall];
    	for(loop=wall-1;loop>=0;loop--)
    	{
    	if(a[loop]>a[loop+1]){
    	
    	print(a,n);
    		a[loop+1]=a[loop];
    		print(a,n);
    		a[loop]=box;
    		print(a,n);
    	}
    }
    	print(a,n);
    }
    for(loop=0;loop<n;loop++){
    	printf("%2d",a[loop]);
    }
}

int main()
{
	int a[]={9,8,7,6,5,4,3,2,1,0};
	int n=sizeof(a)/sizeof(a[0]);
	insertion(a,n);
	printf("\n");
	return 0;
}
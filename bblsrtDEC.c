#include <stdio.h>
void bubbleSort(int a[],int n);
int main()
{
    int i,n;
    printf("How many number you want to sort : ");
    scanf("%d",&n);
    int srt[n];
    printf("\n Enter numbers : ");
   for(i=0;i<=n-1;i++)
   {
   	scanf("%d",&srt[i]);
   }
    printf("Before Sorting : ");
    for(i=0;i<=n-1;i++){
         printf(" %d ",srt[i]);
    }
   
    bubbleSort(srt,n);
    //------ Decreasing Order -------
    printf("\n\nAfter Sorting :");
    for(i=0;i<=n-1;i++){
         printf(" %d ",srt[i]);
    }
    printf("\n");
    return 0;
}

void bubbleSort(int a[],int n){
    int i,j,t;
    n=n-2;
    for(i=0;i<=n;i++){
        for(j=0;j<=n-i;j++){
            if(a[j]<a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
}
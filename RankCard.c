#include <stdio.h>
int main()
{
	int one,two,thr,four,avg;
	printf("Enter 1st number: ");
	scanf("%d",&one);
	printf("\nEnter 2ndt number: ");
	scanf("%d",&two);
	printf("\nEnter 3st number: ");
	scanf("%d",&thr);
	printf("\nEnter 4st number: ");
	scanf("%d",&four);
	avg=(one+two+thr+four)/4;
	printf("\navg=%d",avg);

    if(avg>=80)
    printf("\n\tGRADE O");
    else if(avg<80&&avg>=60)
    printf("\n\tGRADE A");
    else if(avg<60&&avg>=50)
    printf("\n\tGRADE B");
    else if(avg<50&&avg>=40)
    printf("\n\tGRADE C");
    else
    printf("\n\tF A I L ! ");
	printf("\n");
	return 0;
}
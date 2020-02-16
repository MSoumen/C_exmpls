#include <stdio.h>
int main()
{
	int line,no,inputs,flag=0,i;
	scanf("%d %d",&line,&no);
	for(i=1;i<=line;i++)
	{
		scanf("%d",&inputs);
		if(inputs%no==0)
		{
			flag++;
		}
	}
	printf("\n%d",flag);
	return 0;
}
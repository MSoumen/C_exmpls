#include <stdio.h>
int main()
{
	int rem;
	int loop;
	scanf("%d",&loop);
	while(loop--)
	{
	    int first=0,last=0;
	    long long int num;
		scanf("%lld",&num);
		if(num/10==0)
			first=num;
		else
		{
			last=num%10;
			while(num!=0)
			{
	     		rem=num%10;
				num=num/10;
			    if(num/10==0)
		         first=rem;
			}
		}
		printf("%d\n",first+last);  
	}
/*	scanf("%d",&num);
	int sum=0;
	while(num>0)
	{
		rem=num%10;
		num=num/10;
		sum=sum+rem;
	}
	printf("%d",sum);
*/	
	return 0;
}
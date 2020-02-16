#include <stdio.h>

#define MAX 160
int res[MAX];

int multiply(int res[],int x,int res_digit)
{
	int carry=0;
	for(int i=0;i<res_digit;i++){
		int prod=res[i]*x+carry;
		res[i]=prod%10;
		carry=prod/10;
	}

	while(carry!=0){
			res[res_digit]=carry%10;
			carry=carry/10;
			res_digit++;
	}
	
	return res_digit;
}

void factorial(int n)
{
	res[0]=1;
	int res_digit=1;
	for(int x=2;x<=n;x++)
	{
		res_digit=multiply(res,x,res_digit);
	}
	//printf("%d!= ",n);
	for(int i=res_digit-1;i>=0;i--)
	{
		printf("%d",res[i]);
	}
	printf("\n");
}

int main()
{
	int n,i;
	scanf("%d",&i);
	while(i>0){
		scanf("%d",&n);
		factorial(n);
		
		i--;
	}
	
//	printf("\n");
	return 0;
}
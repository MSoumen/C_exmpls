#include <stdio.h>
int main()
{
	int no;
	int loop;
	scanf("%d",&loop);
	while(loop--){
		scanf("%d",&no);
		int flag =0,rem;
		while(no!=0)
		{
			rem=no%10;
			no/=10;
			if(rem==4)
			 flag++;
		}
		printf("%d\n",flag);
	}
	return 0;
}
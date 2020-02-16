#include <stdio.h>

int main(void) {
	// your code goes here
	unsigned int X;
	float Y;
	
	scanf("%d %f",&X,&Y);
	//remBal=Y;
	if(X%5==0 && X<Y-0.50)
	{
	    Y=Y-X-0.50;
	    //remBal+=0.50;
	}
	printf("%.2f",Y);
	
	return 0;
}

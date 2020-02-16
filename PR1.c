#include <stdio.h>
#include "function.c"
int i=35;
int func1();
int func2();
int main()
{
	printf("%d\n",i);
	func1();
	func2();
	return 0;
}
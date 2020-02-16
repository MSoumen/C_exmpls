#include <stdio.h>
void func1();
void func2();

#pragma startup func1
#pragma exit func2

int main()
{
	printf("in main\n");
	printf("before return\n");
}
void func1()
{
	printf("in function 1\n");
}
void func2()
{
	printf("in function 2\n");
}
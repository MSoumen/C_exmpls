extern int i;
int func1()
{
	i++;
	printf("%d\n",i);
	return 0;
}
int func2()
{
	i--;
	printf("%d\n",i);
	return 0;
}
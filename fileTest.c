#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE *file;
	char ch[100];
	file=fopen("test.txt","w");
	while(strlen(gets(ch))>0)
	{
		fputc(ch,file);
		fputc("\n",file);
	}
	puts("\n");
	fclose(file);
	return 0;
}
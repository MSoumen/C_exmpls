#include <stdio.h>
int xStrlen(char *s);
void xStrcat(char *s, char *t);
int stringLength;
int main()
{
	/*char name[]="Babumoshai";
	printf("Hello! You are a ");
	#ifdef METHOD1
	int i=0;
	int n=sizeof(name)/sizeof(name[0]);
	 while(i<=n)
	{
		printf("%c",name[i]);
		i++;
	}
	#else 
	char *ptr;
	ptr=name;
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
	#endif
	printf("\n");
	
	//char str[]="strange";
	char *a="strange2",*b;
	char str2[10];
	b=str2;
	b=a;
	printf("%s",str2);*/

	char source[]="World";
	char target[]="hello";
	stringLength=xStrlen(target);
	xStrcat(source,target);
	printf("%s",target);
	printf("\n");
	return 0;
}
int xStrlen(char *s)
{
	int length=0;
	while(*s!='\0')
	{
		length++;
		s++;
	}
	return (length);
}

void xStrcat(char *s,char *t)
{
	t=t+stringLength;
	while(*s!='\0'){
		*t=*s;
	//	s++;
		t++;
		s++;//both position of s++ is correct..
	}
	*t='\0';
}

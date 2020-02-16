#include <stdio.h>
#include <stdlib.h>
int MAX=5;//---- These are call Global variable....
int TOP=-1;

void push(int a[],int x)
{
	if(TOP<(MAX-1))
	{
		TOP+=1;
		a[TOP]=x;
	}
	else
	printf("\n Stack Overflow !");
	
}

int pop(int a[])
{
	int x=0;
	if(TOP==-1)
	printf("\nStack Underflow");
	else{
		x=a[TOP];
		TOP=TOP-1;
		//return x;
		}
	return (x);
}

void display(int a[])
{
    int i;
	if(TOP>-1)
	{
		for(i=0;i<=TOP;i++)
		printf("%3d",a[i]);
		printf("\n\n");
	}
	else
	printf("E M P T Y ! \n\n");
}

int main()
{
	int a[MAX],pux,pox;
	int take;
	printf("\n---–---------------------------");
	printf("\n       STACK OPERATIONS");
	printf("\n---–---------------------------\n");
	while(1)
	{
	    printf("\n\t01.PUSH Operation");
	    printf("\n\t02.POP Operation");
	    printf("\n\t03.Display Stack");
	    printf("\n\t04.Exit");
		printf("\nEnter your choice : ");
		scanf("%d",&take);
		switch(take)
		{
			case 1:
			 printf("\nPushing item : ");
			 scanf("%d",&pux);
			 push(a,pux);
			 printf("\nComplete . . . . \n\n");
			 break;
			case 2:
			 pox=pop(a);
			 printf("\nPopping item : %d",pox);
			 printf("\nComplete . . . . \n\n");
			 break;
			case 3:
			 printf("\nDisplaying the updated Stack : ");
			 display(a);
			 break;
			case 4:
			 exit(0);
		}
   }
   return 0;
	
}
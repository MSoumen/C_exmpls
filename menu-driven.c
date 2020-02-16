#include <stdio.h>
#include <stdlib.h>


void sum();
void diff();
void mul();
void divi();

int main()
{
    int choice;
    while(1)
    {
    	printf("\n\n\t SIMPLE CALCULATOR\n ");
    		printf("\n\t01.SUM");
    		printf("\n\t02.Difference");
    		printf("\n\t03.Multiplication");
    		printf("\n\t04.Division");
    		printf("\n\t05.EXIT");
    		printf("\nPick up your choice : ");
    		scanf("%d",&choice);
    		
    		switch(choice)
    		{
    			case 1:
    			sum();
    			break;
    			case 2:
    			diff();
    			break;
    			case 3:
    			mul();
    			break;
    			case 4:
    			divi();
    			break;
    			case 5:
    			exit(0);
    			default :
    			printf("\n ERROR::enter choice as 1,2,3,4....");
    			break;
    		}
    }
	
	
	return 0;
}

void sum()
{
    int a,b,c;
	printf("\nEnter two number for SUM : ");
	scanf("%d %d",&a, &b);
	c=a+b;
	printf("\n%d + %d = %d\n",a,b,c);
}
void diff()
{
	 int a,b,c;
		printf("\nEnter two number for Substraction : ");
		scanf("%d %d",&a, &b);
		c=a-b;
		printf("\n%d - %d = %d\n",a,b,c);
}
void mul()
{
	 int a,b,c;
		printf("\nEnter two number for multiplication : ");
		scanf("%d %d",&a, &b);
		c=a*b;;
		printf("\n%d * %d = %d\n",a,b,c);
}
void divi()
{
	    int a,b,c;
		printf("\nEnter two number for Division  : ");
		scanf("%d %d",&a, &b);
		if(b==0){
			printf("E R R O R !");
		}
		else{
			c=a/b;		
			printf("\n%d / %d = %d\n",a,b,c);
		}
		
}
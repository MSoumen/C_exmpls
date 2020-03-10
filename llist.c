#include <stdio.h>
//#include <conio.h>
#include <stdlib.h>
typedef struct node
{
	int x;
	int y;
	struct node *next;
}node;
node *head=NULL;

void add()
{
	node *new_node;
	new_node=(node*)malloc(sizeof(node));
	printf("Enter (x,y):");
	scanf("%d,%d",&new_node->x,&new_node->y);
	new_node->next=NULL;
	if(head==NULL)
		head=new_node;
	else
	{
		node *track;
		track=head;
		while(track->next!=NULL)
			track=track->next;
		track->next=new_node;
	}
	
}

void peek(node* head)
{
	node *ptr;
	if(head==NULL)
		printf("Linked List empty\n");
	
	ptr=head;
	while(ptr!=NULL)
	{
		printf("(%d,%d)->",ptr->x,ptr->y);
		ptr=ptr->next;
	}
	printf("\n\n");
}

int main()
{
	int ch;
	while(1){
		printf("\n");
		printf("\t1.Add coordinates in LinkedList\n");
		printf("\t2.Traverse coordinates in LinkedList\n");
		printf("\t3.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1:
				add();
				break;
			case 2:
				peek(head);
				break;
			case 3:
				exit(0);
		}
	}

	return 0;
}
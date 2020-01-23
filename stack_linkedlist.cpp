#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
	int val;
	struct node *next;
};
struct node *head;

int main()
{
	int choice=0;
	printf("\nSTACK operations using LINKED LIST\n");
	while(choice!=4)
	{
		printf("\nChoose an option\n");
		printf("\n1.Push\n2.Pop\n3.Show\n4.Exit");
		printf("\nEnter Choice\n");
		scanf("%d", &choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				break;
			default:
				printf("Invalid choice");
		}
	}
}
void push()
{
	int val;
	struct node *ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("OVERFLOW");
	}
	else
	{
		printf("Enter value: ");
		scanf("%d", &val);
		if(head==NULL)//stack empty
		{
			ptr->val=val;
			ptr->next=NULL;//first node
			head=ptr;
		}
		else
		{
			ptr->val=val;
			ptr->next=head;//assign address of starting element to address of new node
			head=ptr;//make new node the starting node
		}
		printf("Item pushed");
	}	
}

void pop()
{
	int item;
	struct node *ptr;
	if(head==NULL)//stack empty
	{
		printf("UNDERFLOW");
	}
	else
	{
		item=head->val;//value of topmost node
		ptr=head;
		head=head->next;//next node becomes head node
		free(ptr);//head node memory is freed
		printf("Item popped");	
	}
}
void display()
{
	//int i;
	struct node *ptr;
	ptr=head;//copying head pointer into temporary pointer
	if(ptr==NULL)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Printing Stack elements\n");
		while(ptr!=NULL)
		{
			printf("%d\n", ptr->val);//printing value of node
			ptr=ptr->next;//moving pointer to next node
		}	
	}
}



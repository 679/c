/* First time ritika typed something in this program*/
#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int value;
	struct node *link;
};

typedef struct node snode;
typedef int boolean;

int size=0, item;
snode *top=NULL, *temp;

void push (void);
void pop (void);
void traverse(void);
boolean isEmpty();

main()
{
	int choice, n;
	while(1)
	{
		printf("Enter your choice:\n 1. PUSH\n 2. POP\n 3. Traverse\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	push(); 
					break;

			case 2: if(isEmpty())
					{
						printf("There are no items left in the stack to POP!\n");	
					}
					else
					{
						pop();
					}
					break;

			case 3: if(isEmpty())
					{
						printf("Stack is empty! no items to display!\n");
					}
					else
					{
						traverse();
					}
				   	break;
		}
	}
}

boolean isEmpty()
{
	if (top==NULL) return 1;
	else return 0;
}

void push ()
{
	int n;
	temp = (snode *) malloc (sizeof(snode *));

	if(	temp == NULL )
	{
		printf(" Stack is FULL\n Memory not allocated\n");
		return;
	}
	else
	{
		printf("\n Enter a value to push into stack: ");
		scanf("%d",&n);

		temp->value = n;
		temp->link = NULL;

		if(isEmpty())
		{
			top = temp;
		}
		else
		{
			top->link = temp;
			top = temp;
			top->link = NULL;
		}
		size++;
	}
}

void pop()
{
	item = top->value;
	top--;
	printf("The deleted item is: %d\n", item);
	size--;
}

void traverse()
{
	int i=0;
	snode *ptr;
	*ptr = *top; 
		 
	//	.
	//	.0
	for (;i<size;i++)
	{
		printf("%d", ptr->value);
		ptr--;
	}
}

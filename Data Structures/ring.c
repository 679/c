#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *link;
}node;
node *head, *tail;

int count=0;

void insert (node *temp)
{
	printf("the node being inserted in the list is:%d ", temp->data);
	if(head==NULL)
	{
		head = temp;
		tail = temp;
		head ->link = head;
		//ddfree(temp);
		count++;
	}
	else
	{
		tail -> link = temp;
		tail = tail->link;
		free(temp);
		count++;
	}
}

void print()
{
	node *temp;
	temp = head;
	printf("The elements in the list are : ");
	do
	{
		printf("%d ", temp->data);
		temp = temp->link;
	}while (temp->link !=head);
}

void delete()
{
	int element;
	printf("Enter the node to delete:");
	scanf("%d", &element);
}

//void insert at the begin();

int main()
{
	int ch;
	while(1)
	{
		printf("Basic ring operations: \n");
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Print\n");
		printf("4.exit\n");

		scanf("%d", &ch);

		switch(ch)
		{
			case 1: 
				{
					node *temp = (node*)malloc(sizeof(node));
					if(temp == NULL)
					{
						printf("memory not allocated for the node, please try again after some time!\n");
						return;
					}
					printf("Enter a value to insert into node:");
					scanf("%d", &temp->data);
					temp->link = head;
					insert(temp);
				}	
				break;

			case 2:
				{
					if(head==NULL)printf("No elements to delete\n");
					else {
						delete();
					}
				}
				break;

			case 3:
				{
					if (!(head==NULL)) print();
					else printf("No node to display\n");
				}
				break;

			case 4:
				{
					return;
				}
				break;

			default : printf("Invalid Choice\n");
		}
	}
		return 0;
}

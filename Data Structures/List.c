#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *link;
};

struct node *root = NULL;
int count=0, ch; 

void append(void);
void addafter(void);
void addatbegin(void);
void display(void);
void swap(void);
void reverse(void);
void sort(void);
void delete(void);


void main()
{
	while(1)
	{
		printf("\n Single Linked List Operations:");
		printf("\n 1. Append");
		printf("\n 2. Addafter ");
		printf("\n 3. AddatBegin ");
		printf("\n 4. Display");
		printf("\n 5. Swap");
		printf("\n 6. Reverse");
		printf("\n 7. Sort");
		printf("\n 8. Delete");
		printf("\n 9. Exit");

		printf("\n Enter your choice:");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1: append();
					break;

			case 2: addafter();
					break;

			case 3: addatbegin();
					break;

			case 4: display();
					break;

			case 5: swap();
					break;

			case 6: reverse();
					break;

			case 7: sort();
					break;

			case 8: delete();
					break;

			case 9: return;

			default : printf("\n Invalid Choice! ");
		}
	}
}

void append()
{
	int item;
	struct node *temp, *t;
	temp = (struct node*) malloc (sizeof(struct node));

	printf("\n Enter a value to be placed in the list: ");
	scanf("%d", &temp->data);

	temp->link = NULL;	

	if (root == NULL)
	{
		// Insert at the begin();
		root = temp;
	}
	else 
	{
		t = root;
		while (t->link != NULL)
		{
			t = t->link;
		}
		t->link = temp;
	}
	count++;
}

void addafter()
{
	struct node *temp, *p;
	int i=1, loc;
	p=root;

	temp = (struct node*) malloc(sizeof(struct node *));

	if(root == NULL)
	{
		printf("List is empty\n");
		addatbegin();
		return;
	}

	printf("enter a position to insert:");
	scanf("%d", &loc);
	if (loc < 1 || loc > count)
	{
		printf("\nInvalid position");
		printf("There are %d nodes in the List", loc);
		return;
	}
	while (i<loc)
	{
		p = p->link;
		i++;
	}
	printf("\n%d", i);
	printf("\nEnter a value to insert into the list:");
	scanf("%d", &i );
	temp->data = i;
	temp->link = p->link;
	p->link = temp;
	count++;
}

void addatbegin(void)
{
	struct node * temp;

	temp = (struct node*) malloc (sizeof(struct node *));
	printf("\nEnter a value to insert: ");
	scanf("%d", &temp->data);
	temp->link = NULL;

	if (root == NULL)
	{
		root = temp;
		free(temp);
	}
	else 
	{
		temp->link = root;
		root = temp;
	}
}

void display()
{
	int i=0;
	struct node *t;
	t = root;

	if (t == NULL)
	{
		printf("No elements to display \n");
		return;
	}

	else 
	{
		if(t==root)
		{
			printf("%d\n", t->data);
			t = t->link;
		}
	//	while (t->link != NULL )
		while (t != NULL )
		{
			printf("%d\n", t -> data);
			t = t -> link;
		}
	}
}

void delete()
{
	int loc;

	struct node *p, *q;

	if(root==NULL)
	{
		printf("\nList is empty!");
		return;
	}

	printf("\n Enter the node location to delete: ");
	scanf("%d", &loc);
//	printf("No. of nodes in List are : %d\n", count);

	if(loc > count)
	{
		printf("Invalid location\n");
		printf("current list having %d node\n", count);
		return;
	}

	if(loc == 1)
	{
		// delete root node;
		if (root->link != NULL)
		{
		p = root;
			root = p->link;
			p->link = NULL;
			free(p);
		}
		else
		{
			p = root;
			root = NULL;
			free(p);
		}
	}
	else 
	{
		p = root;
		q = root;
		int i=0, j=0;

		for (i=0; i<loc; i++)
		{
			p = p->link;
			i++;
		}
		for (j=0; j<=loc; j++)
		{
			q = q->link;
			j++;
		}
		p->link = q->link;
		q->link = NULL;
		free (q);
	}
	count--;
}

void swap()
{
	struct node  *p, *q;
	int temp;
	int loc1, loc2, i=1, j=1;
	p = root;
	q = root;
	printf("\n Enter two locations to swap loc1 & loc2:");
	scanf("%d%d", &loc1, &loc2);
	if(loc1 > count || loc2>count)
	{
		printf("You have entered the invlaid location\n");
	}
	while(i<loc1)
	{
		p = p->link;
		i++;
	}
	while(j<loc2)
	{
		q = q->link;
		j++;
	}
	temp = p->data;
	p->data = q->data;
	q->data = temp;
}

void reverse()
{
	int i,j,k;
	struct node *p, *q;
	i=1;
	j=count;

	while ( root == NULL)
	{
		printf("NO NODES!\n");
		return;
	}
	p = root;
	while (i<j)
	{
		printf("\n--%d%d--\n", i,j );
		q = root;
		k = 1;
		while(k<j)
		{
			q = q->link;
			k++;
		}
		p->data = p->data + q->data;
		q->data = p->data - q->data;
		p->data = p->data - q->data;

		p = p->link;
		i++;
		j--;
	}
}


void sort()
{

}

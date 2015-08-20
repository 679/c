#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *link;
};

typedef int boolean;

void AddQ(int);
int  DeleteQ(void);
boolean isEmpty();
boolean isFull();
int size(); 
void traverse(); // displays all the elements in the queue
int peek(); // return the first (peek element) in the queue

struct node *front, *rear, *ptr;
front = NULL;
rear = NULL;
int count=0;

void main()
{
	int ch;
	printf("\n Basic Queue Operations: ");
	printf("\n 0. Exit");
	printf("\n 1. AddQ()");
	printf("\n 2. DeleteQ()");
	printf("\n 3. Sort");
	printf("\n 4. Reverse");
	printf("\n 5. traverse");
	printf("\n 6. peek");
	printf("\n 7. size");

	scanf("%d", &ch);

	while(1)
	{
		switch(ch)
		{
			case 0 : return;

			case 1: AddQ();
					break;

			case 2: if(isEmpty())
					{ 
						printf("No items to delete\n");
						return;
					}
					else
					{
						DeleteQ();
					}
					break;

			case 3: if (isEmpty())
					{
						printf("Sorry, no itmes to sort\n");
					}
					else {
						sort();
					}
					break;
			case 4: if (isEmpty())
					{
						printf("No elements \n");
						return;
					}
					else 
					{
						reverse();
					}
					break;


			default : printf(" Thank you for using our Queue! You have entered an Invalid choice \n ");
		}
	}
}

AddQ(int item)
{
	while()
	{
	}
}

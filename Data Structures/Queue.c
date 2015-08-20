#include<stdio.h>
#include<stdlib.h>
#define max 5
typedef int boolean;

void AddQ(int);
int  DeleteQ(void);
boolean isEmpty();
boolean isFull();
int size(); 
void traverse(); // displays all the elements in the queue
int peek(); // return the first (peek element) in the queue
void sort();
int Q[max], front = 0, rear = -1;
void reverse();

void main()
{
	int ch;
	while(1)
	{
	printf(" Basic Queue Operations: ");
	printf(" 0. Exit");
	printf(" 1. AddQ()");
	printf(" 2. DeleteQ()");
	printf(" 3. Sort");
	printf(" 4. Reverse");
	printf(" 5. traverse");
	printf(" 6. peek");
	printf(" 7. size");
	printf("\n > Enter your choice: ");

	scanf("%d", &ch);

		switch(ch)
		{
			case 0 : return;

			case 1: if (isFull()) {
						printf(" > Sorry queue is full, try after some time\n");
					}
					 else
					 {
						 int item;
						 printf("\n > Enter a value to insert into the Queue: ");
						 scanf("%d", &item);
						 AddQ(item);
					 }
					 break;

			case 2: if(isEmpty())
					{ 
						printf(" > No items to delete\n");
					}
					else
					{
						printf(" > The deleted item is %d\n", DeleteQ());
					}
					break;

			case 3: if (isEmpty())
					{
						printf(" > Sorry, no itmes to sort\n");
					}
					else {
						sort();
					}
					break;

			case 4: if (isEmpty())
					{
						printf(" > No elements in Q to reverse \n");
					}
					else 
					{
						reverse();
					}
					break;

			case 5: if(isEmpty())
					{
						printf(" > No elemtns in Q to display \n");
					}
					else 
					{
						traverse();
					}
					break;

			case 6: if(isEmpty())
					{
						printf(" > No elements in the Queue\n " );
					}
					else
					{
						printf(" > The Item in the front is: %d \n", peek());
					}
					break;

			case 7: if(isEmpty())
					{
						printf(" > '0' Nodes to display\n");
					}
					else
					{
						printf(" > No. of items in the Queue : %d", size());
					}
					break;

			default : 
					system("clear");
				   	printf("  <Thank You> for using our Queue! You have entered an Invalid choice \n ");
		}
	}
}

boolean isEmpty()
{
	if (rear == -1)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

boolean isFull()
{
	if ( size() == max)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

int size()
{
	if(rear == -1) return 0;
	else 	return (rear + 1);
}

void AddQ(int item)
{
	Q[++rear] = item;
}

int DeleteQ (void)
{
	int temp = Q[front];
	int i=0;
	for (i=front+1; i<rear; i++)
	{
		Q[front] = Q[i];
	}
	rear --;
	return temp;
}

void traverse()
{
	int i;
	printf("The elements in the stack are: \n");
	for (i=front; i<=rear; i++)
	{
		printf("%d\n", Q[i]);
	}
}

void sort()
{
	printf("\ncoming soon");
}

int peek()
{
	return Q[front];	
}

void reverse()
{
	int i=0,j=0;
	j = size();
	j--;
	while (i<j)
	{
		Q[i] = Q[i]+Q[j];
		Q[j] = Q[i]-Q[j];
		Q[i] = Q[i]-Q[j];
		i++; j--;
	}
}

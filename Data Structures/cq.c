#include<stdio.h>
#define max 10

int cq[max],i=0, j=0, rear=-1, front=-1;

typedef int boolean;

boolean isEmpty()
{
	if((rear == -1 && front == -1))
		return 1;

	else return 0;
}

boolean isFull()
{
	if((front==0 && rear==max-1)||(rear == front-1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int peek()
{
	return cq[front];
}

void insert()
{
	int item;

	if(isFull())
	{
		printf("The Queue is full\n");
		return;
	}
	else
	{
		if(isEmpty())
		{
			printf("This is fun rear : %d\n", rear);
			rear = 0; front = 0;
		}
		else if(rear == max-1)
		{
			printf("This is fun rear : %d\n", rear);
			rear = 0;
		}
		else
		{
			printf("This is fun rear : %d\n", rear);
			rear++;
		}
	}
	printf("Enter a value to insert into stack: ");
	scanf("%d", &item );
	//printf("rear:%d ", rear);
	cq[rear] = item;
}

int delete()
{
	int temp;

	if(isEmpty()) 
	{
		printf("No items to delete\n");
		return 0;
	}

	else
	{
		if(front == rear)//single element
		{
			temp = cq[front];
			printf("front index: %d\t value: %d\n", front, cq[front]);
			front = -1;
			rear = -1;
			return temp;
		}
		else if (front == max-1)
		{
			printf("front index: %d\t value: %d\n", front, cq[front]);
			temp = cq[front];
			front = 0;
			return temp;
		}
		else if (front < rear)
		{
			temp = cq[front++];
			printf("front index: %d\t value: %d\n", front, temp);
			return temp;
		}
		else
		{
			temp = cq[front++];
			printf("the deleted item is: %d\n", temp);
		}
	}
}

void display()
{
	if(isEmpty())
	{
		printf(" > No items to display <");
		return;
	}
	else
	{
		if(front<=rear)
		{
			for(i=front; i<=rear; i++)
			{
				printf("%d\n",cq[i]);
			}
		}
		else if ( rear < front )
		{
			for(i=front; i< max;i++) {
				printf("%d\n", cq[i]);
			}
			for(i=0; i<= rear;i++)
			{
				printf("%d\n", cq[i]);
			}
		}
	}
}

void reverse()
{
	if(isEmpty())
	{
		printf("The Queue is empty\n");
		return ;
	}
	else if (front < rear)
	{
		i = front, j= rear;
		while (i<j)
		{
			cq[i] = cq[i] + cq[j];
			cq[j] = cq[i] - cq[j];
			cq[i] = cq[i] - cq[j];
			i++; j--;
		}
	}
	else
	{
		i=0; j = rear;
		while(i<j)
		{
			cq[i] = cq[i] + cq[j];
			cq[j] = cq[i] - cq[j];
			cq[i] = cq[i] - cq[j];
			i++; j--;
		}
	}
	display();
}

void sort()
{
	int n;
	if(isEmpty()) { return ; }
	else 
	{
		if(front < rear)
		{
			i = front, n = rear-1;
			for(i=0; i<n; i++)
			{
				for(j=i+1; j<n+1; j++)
				{
					if(cq[i] > cq[j]) 
					{
						//swap
						cq[i] = cq[i] + cq[j];
						cq[j] = cq[i] - cq[j];
						cq[i] = cq[i] - cq[j];
					}
				}
			}
		}
		else 
		{
			for (i= front; i<max; i++)
			{
				if(cq[i] > cq[j]) 
				{
					cq[i] = cq[i] + cq[j];
					cq[j] = cq[i] - cq[j];
					cq[i] = cq[i] - cq[j];
				}

			}
		}
		display();
	}
}

void main()
{
	int ch;
	while(1)
	{
		printf("1. Insert ");
		printf("2. delete ");
		printf("3. display ");
/*		printf("4. reverse() ");
		printf("5. sort() ");
		printf("6. peek() ");
*/		printf("Enter a value: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1: 
				insert();
				break;

			case 2:
				delete();
				break;

			case 3:
				display();
				break;
/*
			case 4:
				reverse();
				break;

			case 5:
				sort();
				break;

			case 6:
				peek();
				break;
*/
			default :
				printf("Invalid choice: \n");
		}
	}
}

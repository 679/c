#include<stdio.h>

typedef int boolean;

void push(int i);
int pop(void);
int peek(void);
boolean isEmpty(void);
boolean isFull(void);
int size(void);
void traverse (void);

#define SIZE 5
int stack[SIZE];
int top=-1, item;

void traverse ()
{
	int i=0;
	if (isEmpty())
	{
		printf(" There are no elements to display \n");
	}
	else 
	{
		for (i=0; i < size() ; i++)
		{
			printf("%d\t", stack[i]);
		}
		printf("\n");
	}
}

boolean isFull () 
{
	if (top == SIZE-1)
	{
		return 1;
	}
	else 
	{
	   	return 0;
	}
}

boolean isEmpty ()
{
	if (top==-1)
	{
		return 1;
	}
	else 
	{
	   	return 0;
	}
}

void push(int item)
{
	if(isFull())
	{
		printf("The stack is Full!\n");
		return ;
	}
	else
	{
			++top;
			stack[top] = item;
	}
}

int pop ()
{
	if(isEmpty())
	{
		printf("The stack is empty!\n");
		return 1;
	}
	else
	{
		item = stack[top];
		top--;
		return item; 	
	}
}

int peek ()
{
	return stack[top];
}

int size()
{
	return top+1;
}

void main()
{
	int choice, number;
	while(1)
	{
		printf("Enter your choice:\n 1.push\n 2.pop\n 3.peek \n 4.isEmpty \n 5.isFull \n 6.size \n 7.travese\n 8.exit\n");
		scanf("%d", &choice);
		//system("clear");
	
		switch (choice)
		{
			case 1: if (isFull()) 
					{
						printf("the stack has no space\n");
						break;
					}
					else {
						printf("enter a number: to push : ");
						scanf ("%d", &number);
						push(number);
					}
					break;

			case 2: if(isEmpty()) 
					{
					   	printf("the stack is empty.. no itmes to delete \n"); 
						break; 
					}
					else 
					{
						printf("the deleted item is %d\n", pop()); 
					}
					//	printf("current postion of stack is :%d- %d\n", top, stack[top]);
						break;
			case 3: item = peek();
					if(item == 0) printf("the stack is empty\n");
					else	printf("The element on top of the stack is : %d\n", item);
					break;	

			case 4: if(isEmpty()) printf("the stack is empty\n");
						else	printf("The current size of stack is %d\n", size());
						break;
			case 5: if(isFull()) printf("the stack is full\n");
						else printf("the stack is having space for more elements\n");
			case 6: printf("the number of elements in the stack is : %d\n", size());
					break;
			case 7: traverse(); break;
			case 8: return; 
			default : printf("Thank you!\n enter a valid choice\n");
		}
	}
}

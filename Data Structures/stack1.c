#include<stdio.h>
#include<stdlib.h>

void push(void);
void pop(void);
void traverse(void);

int *stack, *j, *top, CAPACITY = 5;

int main()
{
	int ch;
	stack = (int*)calloc(CAPACITY, sizeof(int));
	top = stack;

	while(1)
	{
		printf(" 1. PUSH\n 2. POP\n 3. Traverse\n 4. Exit\n");
		printf("Enter your choice:" );
		scanf("%d",&ch);

		switch(ch)
		{
			case 1: push(); break;
					
			case 2: pop(); break;

			case 3: traverse(); break;

			case 4: return;

			default: printf("this is fun!");
		}
	}
	return 0;
}

void push (void)
{
	if( top < stack+CAPACITY )
	{
		printf("Enter the element to be pushed: ");
		scanf("%d", top);
		++top;
	}
	else
	{
		++CAPACITY;
		stack = (int*)realloc(stack, CAPACITY*sizeof(int));
		printf("Enter the element to be pushed: ");
		scanf("%d", top);
		++top;
	}
}

void traverse(void)
{
	if(stack==top)
	{
		printf("stack is empty!\n\n");
		return;
	}
	else
	{
		for(j=stack; j<stack+CAPACITY; j++)
		{
			printf("%d\n", *j);
		}
	}
}

void pop(void)
{
	if(stack==top)
	{
		printf("stack is empty\n\n");
		return;
	}
	--CAPACITY;
	--top;
	printf("deleted item is : %d\n\n", *top);
	*top = 0;
	stack = (int*)realloc(stack, CAPACITY*sizeof(int));
}

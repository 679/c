#include<stdio.h>
main()
{
	int isvalid = 0, marks;
	do
	{
		printf("Enter Maths marks: ");
		scanf("%d",&marks);

		if(marks >=0 && marks<=100)
		{
			isvalid = 1;
		}

	}while(!(isvalid));
}

#include<stdio.h>
main()
{
	int n;

	printf("Enter a number : ");
	scanf("%d",&n);

	n = ((n>=0&&n<=30)?1:((n>=31 && n<=50)?2:(((n>=51 && n<=75))?3:((n>=76 && n<=100)?4:0))));
//	printf("%d\n",n);

	switch(n)
	{
		case 0: printf("Invalid marks\nPlease note the marks should be [0-100]\n");
				break;
		case 1: printf("D");
				break;
		case 2: printf("C");
				break;
		case 3: printf("Good Job!, You got \'B\' Grade\n");
				break;
		case 4: printf("Congratulations!, You got \'A\' Grade\n");
				break;
		default:printf("Invalid input\n");
	}
}

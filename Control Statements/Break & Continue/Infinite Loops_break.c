#include<stdio.h>
main()
{
	char ch;

	for( ; ; )
	{
		scanf("%c", &ch);
		if(ch == 'x')
		{
			continue;
		}
		printf("%c\n", ch);
	}

}

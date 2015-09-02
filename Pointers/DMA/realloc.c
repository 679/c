#include <stdio.h>
#include <stdlib.h>
int main(){
	int *ptr,i,n1,n2;
	printf("Enter size of array: ");
	scanf("%d",&n1);
	ptr=(int*)malloc(n1*sizeof(int));
	printf("enter %dnumbers: \n", n1);
	for(i=0;i<n1;++i)
		scanf("%d",ptr+i);
	printf("\nEnter new size of array: ");
	scanf("%d",&n2);
	ptr=realloc(ptr,n2);
	for(i=n1;i<n2;++i)
		scanf("%d",ptr+i);
	printf("The entered elements:\n");
	for(i=0; i<n2;i++)
	{
		printf("%d\n",*(ptr+i));
	}
	printf("\nEnter new size of array: ");
	scanf("%d",&n2);
	ptr=realloc(ptr,n2);
	printf("The entered elements:\n");
	for(i=0; i<n2;i++)
	{
		printf("%d\n",*(ptr+i));
	}

	return 0;
}

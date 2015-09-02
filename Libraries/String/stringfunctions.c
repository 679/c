/* String library functions 
prototype:	size_t strlen(const char *str)	  
   */

#include<stdio.h>
#include<string.h>
int main()
{
	char fn[] = "Mohd ", ln[] = "Mubashir", name[20];
	//char fn[] = "Linus ", ln[] = "Torvalds", name[20];

	strcpy(name, fn);
	strcat(name, ln);

	printf("%s\n", fn);
	printf("%s\n", ln);
	printf("%s\n", name);

	printf("length of Name: %zu\n", strlen(fn)+strlen(ln) );
	printf("length of Name: %zu\n", strlen(name));


	return 0;
}


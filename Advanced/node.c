/* this is someprogram you copied from some where right */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct list_node {
	char word[20];
	struct list_node* next;
} list_node;

int main() {
	list_node* head = NULL;
	char str[20];

	printf("Enter a word: ");
	scanf("%s", str);
	while(str[0] != '\n') {
		list_node* tmp = (list_node*)malloc(sizeof(list_node));
		strcpy(tmp->word, str);
		if(head)   { tmp->next = tmp; }
		else	        { tmp->next = NULL; }
		head = tmp;

	//	printf("Enter a word: ");
	//	scanf("%s", str);
	}
	return 0;
}

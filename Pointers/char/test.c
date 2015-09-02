/**/
int main()
{
	char *names[] = {"Miller","Jones","Anderson"};
	printf("%c\n",*(*(names+1)+2));
	printf("%c\n",names[1][2]);
	return 0; // successful termination of a program
}

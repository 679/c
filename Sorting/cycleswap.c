main()
{
	int a = 10, b = 20, c = 30;
	printf("a: %d\t b: %d\t c: %d\n", a, b, c);

	a = a+b;
	b = a-b;
	a = a-b;

	a = a+c;
	c = a-c;
	a = a-c;

	printf("after swaping\n");
	printf("a: %d\t b: %d\t c: %d\n", a, b, c);
}

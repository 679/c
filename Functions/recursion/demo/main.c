/* How many times can I call this function with in itself?
   What are the limiting factors for the termination of this function call?
   which is better recursion or iteration?
   which runs for more time?
   which takes more memory?
   Okay, please tell us: how many times does this program run?
   5Lakhs 23 thoushads..845
 */
main()
{
	static int count;
	printf("%d\n", count++);
	main();
}

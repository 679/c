#include <stdio.h>
#define N 5
main()
{   int i, j, aa[N];


	printf("***Pointers, Arrays, and Pointer Arithmetic***\n\n");


	for (i = 0; i < N; i++) {
		aa[i] = i * i;
		printf("aa + %d = %u; &aa[%d] = %u\n", i, aa + i, i, &aa[i]);
		printf("*(aa + %d) = %d; aa[%d] = %d\n", i, *(aa + i), i, aa[i]);
	}
}

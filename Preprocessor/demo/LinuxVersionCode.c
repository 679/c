#include <stdio.h>
#include <include/linux/utsname.h>
#include <linux/version.h>
int main() {
#if LINUX_VERSION_CODE <= KERNEL_VERSION(2,6,16)
	printf("preprocessor COUNT value is %d\n", COUNT);
#else
	printf("this will be used\n");
#endif
	char *my_kernel_version = utsname()->release;
	printf("%s\n", my_kernel_version);
}

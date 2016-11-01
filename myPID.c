#include "apue.h"

int
main(void)
{
	printf("This program PID is %ld\n", (long)getpid());
	exit(0);
}
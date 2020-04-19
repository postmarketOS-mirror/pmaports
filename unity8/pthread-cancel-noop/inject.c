#include <pthread.h>
#include <stdio.h>

int pthread_cancel(pthread_t thread) {
	printf("NO-OP pthread_cancel!\n");
	return 0;
}

#include "mem.h"
#include <stdlib.h>
#include "editline/readline.h"

extern malloc_func *s0 = NULL;
extern realloc_func *s1 = NULL;
extern free_func *s2 = NULL;

void *rl_malloc(size_t size) {
	void *ptr;
	if( s0==NULL ) {
		ptr = malloc(size);
	} else {
		ptr = s0(size);
	}
	return ptr;
}

void *rl_realloc(void *ptr, size_t newsize) {
	void *newptr;
	if( s1==NULL ) {
		newptr = realloc(ptr, newsize);
	} else {
		newptr = s1(ptr, newsize);
	}
	return newptr;
}

void rl_free(void *ptr) {
	if( s2==NULL ) {
		free(ptr);
	} else {
		s2(ptr);
	}
}

void rl_set_mem_functions(malloc_func *l0, realloc_func *l1, free_func *l2) {
	s0 = l0;
	s1 = l1;
	s2 = l2;
}

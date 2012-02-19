#ifndef H_MEM
#define H_MEM

#ifndef NARROWCHAR
#include "config.h"
#endif

#include <stdlib.h>
#include <sys/stat.h>
#include "chartype.h"
#include <wchar.h>

void *rl_malloc(size_t size);
void *rl_realloc(void *ptr, size_t newsize);
void  rl_free(void *ptr);
wchar_t *rl_wcsdup(const wchar_t *str);
char    *rl_strdup(const char *str);
#endif 

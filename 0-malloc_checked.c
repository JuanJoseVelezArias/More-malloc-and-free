#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void *malloc_checked(unsigned int b)
{
    void *v = (void *)malloc(b * sizeof(void));
        if (v == NULL)
        {
            exit(98);
        }   
    return v;
}
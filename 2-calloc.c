#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
    if(nmemb == 0 || size == 0)
    {
        return NULL;
    }
    int* ar = (int*)malloc(size * nmemb);
    if (ar == NULL) 
    {
        return NULL;
    }
    if(ar != NULL){
    memset(ar,0, nmemb * size);
    }
    return ar;

}
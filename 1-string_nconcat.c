#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    int sz1 = strlen(s1);
    int sz2 = strlen(s2);
    int sz3 = sz1 + n;
    char *string = (char *)malloc((sz3 + 1) * sizeof(char));
        if(n >= sz2)
        {
            if  (string == NULL)
            {
                return NULL;
            }
        }
    unsigned int i, j;

    for (i = 0; i < sz1; i++) 
    {
        string[i] = s1[i];
    }
    for (j = 0; j < n; j++) 
    {
        string[sz1 + j] = s2[j];
    }
    string[sz3] = '\0';

    return string;
}
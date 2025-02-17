#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

int xstrcmp(const char *str1, const char *str2) 
{
    // traverse through both strings and compare each character
    while (*str1!= '\0' && *str2!= '\0' && *str1 == *str2) 
    {
        str1++;
        str2++;
    }

    return *str1 - *str2;
}

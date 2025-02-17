#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

char* xstrcpy(char *destination, const char *source) 
{
    char *dest_start = destination; // store the original start of destination for return

    // traverse through source and copy each character to destination
    while (*source != '\0') 
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0'; // null terminate the destination after last character is copied

    return dest_start; // return pointer to beginning of destination
}
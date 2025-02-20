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
int main() 
{
    char str1[50];
    char str2[] = "Hello, World!";
    char str3[20];
    char str4[] = ""; // Empty string
    char str5[10];
    char str6[] = "This is a longer string";


    // Test case 1: Normal string copy
    char *ret1 = xstrcpy(str1, str2);
    printf("Test Case 1:\n");
    printf("Source: %s\n", str2);
    printf("Destination: %s\n", str1);
    printf("Return value: %p\n", ret1); // Verify the return value
    printf("Address of str1: %p\n", &str1);

    // Test case 2: Copying an empty string
    char *ret2 = xstrcpy(str3, str4);
    printf("\nTest Case 2:\n");
    printf("Source: %s\n", str4);
    printf("Destination: %s\n", str3);
    printf("Return value: %p\n", ret2);
    printf("Address of str3: %p\n", &str3);


    // Test case 3: Destination smaller than Source (potential overflow - handle with care!)
    // You SHOULDN'T do this EVER.
    // In real code, prevent THE overflow!
    char *ret3 = xstrcpy(str5, str6); //  DANGER: Potential Buffer Overflow
    printf("\nTest Case 3 (DANGER - potential overflow):\n");
    printf("Source: %s\n", str6);
    printf("Destination: %s\n", str5); // corrupted!
    printf("Return value: %p\n", ret3);
    printf("Address of str5: %p\n", &str5);

    // Test case 4: Copying to an already populated string
    char str7[] = "Initial Value";
    char str8[] = "New Value";
    char* ret4 = xstrcpy(str7, str8);
    printf("\nTest Case 4:\n");
    printf("Source: %s\n", str8);
    printf("Destination: %s\n", str7);
    printf("Return value: %p\n", ret4);
    printf("Address of str7: %p\n", &str7);


    return 0;
}

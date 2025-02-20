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
int main() 
{
    // Test cases
    printf("xstrcmp(\"apple\", \"apple\"): %d\n", xstrcmp("apple", "apple"));   // 0 (equal)
   
    printf("xstrcmp(\"apple\", \"apricot\"): %d\n", xstrcmp("apple", "apricot")); // Negative (apple < apricot)
    printf("xstrcmp(\"apricot\", \"apple\"): %d\n", xstrcmp("apricot", "apple")); // Positive (apricot > apple)
    printf("xstrcmp(\"apple\", \"Apple\"): %d\n", xstrcmp("apple", "Apple"));   // Positive (case-sensitive)
    printf("xstrcmp(\"\", \"apple\"): %d\n", xstrcmp("", "apple"));       // Negative (empty < apple)
    printf("xstrcmp(\"apple\", \"\"): %d\n", xstrcmp("apple", ""));       // Positive (apple > empty)
    printf("xstrcmp(\"zebra\", \"zebra\"): %d\n", xstrcmp("zebra", "zebra"));   // 0 (equal)
    printf("xstrcmp(\"zebra\", \"zebras\"): %d\n", xstrcmp("zebra", "zebras"));  // Negative (zebra < zebras)
    printf("xstrcmp(\"zebras\", \"zebra\"): %d\n", xstrcmp("zebras", "zebra"));  // Positive (zebras > zebra)
    printf("xstrcmp(\"A\", \"a\"): %d\n", xstrcmp("A", "a")); // Positive (A < a in ASCII)
    printf("xstrcmp(\"aa\", \"a\"): %d\n", xstrcmp("aa", "a")); // Positive ("aa" > "a")
    printf("xstrcmp(\"a\", \"aa\"): %d\n", xstrcmp("a", "aa")); // Negative ("a" < "aa")

    return 0;
}
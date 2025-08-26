// Reverse a string
#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "hello";
    printf("String = %s\n", str);
    strrev(str);
    printf("Reverse String = %s\n", str);
}
// Check whether the string is palindrome or not
// Example: str = DAD -> rev -> DAD (Palindrome)
// str = "sprk" -> rev = krps -> Not Palindrome
// 2. WAP to check whether the character is vowel or consonant
// a e i o u -> Vowel
// input -> 1 character
#include <stdio.h>
int main()
{
    char alphabet;
    printf("Enter a character: ");
    scanf("%c", &alphabet);

    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet == 'O' || alphabet == 'U')
    {
        printf("Character = %c is vowel\n", alphabet);
    }
    else
    {
        printf("Character = %c is consonant\n", alphabet);
    }
}
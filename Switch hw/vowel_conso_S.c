#include <stdio.h>
#include <ctype.h>

#define end "\x1b[0m"
#define green "\x1b[32m"
#define yellow "\x1b[33m"
#define blue "\x1b[34m"

int main()
{
    char ch;
    printf(blue"Write an Alphabet: "end);
    scanf("%c", &ch);

    ch = tolower(ch);

    switch (ch)
    {
    case 'a':
    case 'e': 
    case 'i':
    case 'o':
    case 'u':
        printf(green"Vowel\n"end);
        break;
    default:
        printf(yellow"Consonant\n"end);
        break;
    }
    return 0;
}
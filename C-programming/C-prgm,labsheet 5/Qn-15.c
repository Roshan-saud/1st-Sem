/*
15. Write a program where a function accepts a string and a character. The function should look 
for the first occurrence of the character in the string and return a pointer to that location.
*/

#include <stdio.h>
char* check(const char* string, char character) {
    while (*string != '\0') {
        if (*string == character) {
            return (char*)string; 
        }
        string++;
    }
    return NULL; 
}

int main() {
    char ig[100];
    char ic;
    char* r;

    printf("Enter a string: ");
    fgets(ig, sizeof(ig), stdin);

    printf("Enter a character to find: ");
    scanf("%c", &ic);

    r = check(ig, ic);

    if (r != NULL) {
        printf("The first occurrence of '%c' is at index %ld.\n", ic, r - ig);
    } else {
        printf("'%c' not found in  string.\n", ic);
    }

    return 0;
}


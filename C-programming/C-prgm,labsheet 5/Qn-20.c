#include <stdio.h>

int is_vowel(char ch) {
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 1; // It's a vowel
        default:
            return 0; // It's not a vowel
    }
}

int main() {
    FILE *in, *out;
    char iname[100], oname[100];
    char ch;

    // Input file
    printf("Enter name of  input file: ");
    scanf("%s", iname);

    // Output file
    printf("Enter  name of output file: ");
    scanf("%s", oname);

    // Open input file for reading
    in = fopen(iname, "r");
    if (in == NULL) {
        printf("Error");
        return 1;
    }

    // Open output file for writing
    out = fopen(oname, "w");
    if (out == NULL) {
        printf("Error");
        return 1;
    }

    // Read from input file, remove vowels, and write to output file
    while ((ch = fgetc(in)) != EOF) {
        if (!is_vowel(ch)) {
            fputc(ch, out);
        }
    }

    fclose(in);
    fclose(out);

    printf("Vowels removed successfully.\n");

    return 0;
}
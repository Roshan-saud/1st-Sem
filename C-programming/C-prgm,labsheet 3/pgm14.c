
#include <stdio.h>

void main() {
    char sr[100];
    printf("Enter a string: ");
    scanf("%s", sr);

    int l = 0;
    while (sr[l] != '\0') {
        l++;
    }

    int start = 0;
    int end = l - 1;

    while (start < end) {
        char temp = sr[start];
        sr[start] = sr[end];
        sr[end] = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", sr);
}
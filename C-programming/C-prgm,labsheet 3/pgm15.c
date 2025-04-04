// Write a program to count number of words in a sentence.
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int count=0;
    
    printf("Enter your sentence: ");
    gets(str);

    if (str[0] != ' ' && str[0] != '\0') {
        count = 1;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        
        if (str[i] == ' ' && str[i+1] != ' '){
        count++;    
        }
    }
    
    printf("Number of words = %d", count);
}
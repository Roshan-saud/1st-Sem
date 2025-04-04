#include <stdio.h>
#include <string.h>
void main()
{
    char string1[20];
    int i, length;
    int flag = 0;
    printf("Enter a string: ");
    scanf("%s", string1);

    // Calculate the string length
    length = strlen(string1);

    // Compare characters from the start and end of the string
    // and stop if a mismatch is found or the middle of the string is reached.
    for (i = 0; i < length / 2; i++)
    {
        if (string1[i] != string1[length - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("%s is not a palindrome\n", string1);
    }
    else
    {
        printf("%s is a palindrome\n", string1);
    }
}




 /*Hint : You can also do by using strcmp in easy way but if question say do without string handling then
  you  can't

#include <stdio.h>
#include <string.h>

int main() {
char string[100], rev_string[100];

printf("Enter a string: ");
gets(string);

strcpy(rev_string, string);
strrev(rev_string);

if(strcmp(string, rev_string) == 0)
  printf("%s is a palindrome string.\n", string);
else
  printf("%s is not a palindrome string.\n", string);

return 0;
}
*/

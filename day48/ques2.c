Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, start, end;
    char temp;

    fgets(str, sizeof(str), stdin);

    i = 0;

    while (str[i] != '\0')
    {
        // Skip spaces
        if (str[i] == ' ')
        {
            i++;
            continue;
        }

        // Find starting position of word
        start = i;

        // Find ending position of word
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
        {
            i++;
        }

        end = i - 1;

        // Reverse the word
        while (start < end)
        {
            temp = str[start];
            str[start] = str[end];
            str[end] = temp;

            start++;
            end--;
        }

        if (str[i] == '\n')
            break;
    }

    printf("%s", str);

    return 0;
}
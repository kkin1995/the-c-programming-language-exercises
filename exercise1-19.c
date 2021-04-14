#include <stdio.h>
#include <stdlib.h>

char *reverseString(char *s, char *reversed);

int main(int argc, char **argv)
{
    char *s = argv[1];
    char *reversed;

    reversed = reverseString(s, reversed);

    printf("%s\n", s);
    printf("%s\n", reversed);
}

char *reverseString(char *s, char *reversed)
{
    int count = 0;
    while (s[count] != '\0')
    {
        count++;
    }
    reversed = malloc(count * sizeof(char*));
    int j = count - 1;
    for (int i = 0; i < count; i++)
    {
        reversed[j] = s[i];
        j--;
    }
    return reversed;
}
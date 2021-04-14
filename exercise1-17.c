// Write a program to print all input lines that are longer than 80 characters.

# include <stdio.h>

#define TO_PRINT 80
#define MAXLINE 1000

int get_line(char s[], int limit);

int main()
{
    int len;
    char line[MAXLINE];
    while ((len = get_line(line, MAXLINE)) > 0)
    {
        if (len > TO_PRINT)
        {
            printf("%s", line);
        }
    }

}

int get_line(char s[], int limit)
{
    int c, i;
    for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
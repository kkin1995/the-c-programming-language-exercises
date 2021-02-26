// Write a program to count blanks, tabs, and newlines

# include <stdio.h>

int countLines();
int countChar();
int countTabs();

int main()
{
    // int newLine = countLines();
    // printf("Number of Lines = %d\n", newLine);
    // int newChar = countChar();
    // printf("Number of Characters = %d\n", newChar);
    int newTabs = countTabs();
    printf("Number of Tabs = %d\n", newTabs);
}

int countTabs()
{
    int c, newTabs = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            ++newTabs;
        }
    }
    return newTabs;
}

int countChar()
{
    int c, newChar = 0;
    while ((c = getchar()) != EOF)
    {
        ++newChar;
    }
    return newChar;
}

int countLines()
{
    int c, newLine = 0;
    while ((c = getchar()) != EOF) // Ctrl + D is EOF on Linux
    {
        if (c == '\n')
        {
            ++newLine;
        }
    }
    return newLine;
}
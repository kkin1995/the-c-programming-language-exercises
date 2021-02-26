// Write a program to print a temperature conversion table from Celsius to Fahrenheit
# include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int convert_celsius_fahrenheit(int celsius) {
    int fahrenheit = ((9 * celsius / 5) + 32);
    return fahrenheit;
}

int main() {
    int fahrenheit;
    int celsius = LOWER;

    printf("%s\t%s\n", "Celsius", "Fahrenheit");

    while (celsius <= UPPER) {
        fahrenheit = convert_celsius_fahrenheit(celsius);
        printf("%d\t%d\n", celsius, fahrenheit);
        celsius += STEP;
    }
}
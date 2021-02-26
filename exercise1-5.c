// Write a temperature conversion program to print from 300C to 0C
# include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

int convert_celsius_fahrenheit(int celsius) {
    int fahrenheit = ((9 * celsius / 5) + 32);
    return fahrenheit;
}

int main() {
    int celsius = UPPER;
    int fahrenheit;
    while (celsius >= LOWER) {
        fahrenheit = convert_celsius_fahrenheit(celsius);

        printf("%d\t%d\n", celsius, fahrenheit);

        celsius -= 20;
    }
}
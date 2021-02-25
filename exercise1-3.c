# include <stdio.h>

// Symbolic Constants
#define LOWER 0
#define UPPER 300
#define STEP 20

int convert_fahrenheit_celsius(int fahrenheit);

int main() {
    int celsius;
    int fahrenheit = LOWER;

    FILE *f;

    f = fopen("celsius_to_fahrenheit.txt", "w");
    printf("%s\t%s\n", "Fahrenheit", "Celsius");
    // fprintf("%s\t%s\n", "Fahrenheit", "Celsius");

    while (fahrenheit <= UPPER) {
        celsius = convert_fahrenheit_celsius(fahrenheit);
        // To Print to Screen
        
        printf("%d\t%d\n", fahrenheit, celsius);
        
        // To Print to File
        
        // fprintf(f, "%d\t%d\n", fahrenheit, celsius);
        fahrenheit += STEP;
    }
    fclose(f);
}

int convert_fahrenheit_celsius(int fahrenheit) {
    int celsius = (5 * (fahrenheit - 32)) / 9;
    return celsius;
}
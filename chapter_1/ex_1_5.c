#include <stdio.h>
#define LOWER 0.0
#define UPPER 300.0
#define STEP 20
int main(){
    float celsius, fahrenheit;
    printf("Fahrenheit\tCelsius\n");
    for(fahrenheit = UPPER; fahrenheit >= LOWER; fahrenheit = fahrenheit-STEP){
        celsius = 5.0 * (fahrenheit - 32.0) / 9.0;      
        printf("%3.0f\t\t%6.1f\n", fahrenheit, celsius);
    }
    return 0;
}
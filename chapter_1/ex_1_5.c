#include <stdio.h>
int main(){
    float celsius, fahrenheit;
    int step, lower, upper;
    step = 20;
    lower = 0.0;
    upper = 300.0;
    printf("Fahrenheit\tCelsius\n");
    for(fahrenheit = upper; fahrenheit >= lower; fahrenheit = fahrenheit-step){
        celsius = 5.0 * (fahrenheit - 32.0) / 9.0;      
        printf("%3.0f\t\t%6.1f\n", fahrenheit, celsius);
    }
    return 0;
}
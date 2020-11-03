#include <stdio.h>
// print the celsius to fahrenheit table. Celsius: 0, 20, 40, ...300
int main(){
    float celsius, fahrenheit;
    int lower, upper, step;
    step = 20;
    lower = 0;
    upper = 300;
    celsius = lower;
    printf("Celsius\t\tFahrenheit\n");
    while(celsius <= upper){
        fahrenheit = (9.0 * celsius / 5.0 ) + 32.0;
        printf("%3.0f\t\t%6.2f\n", celsius, fahrenheit);
        celsius = celsius + step;
    }
    return 0;
}
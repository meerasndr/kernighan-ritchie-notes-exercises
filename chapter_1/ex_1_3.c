#include <stdio.h>
/* print Fahrenheit-celsius table for fahr = 0, 20, 40 ... 300 */
int main(){
    float fahr, celsius;
    int lower, upper, step;
    lower = 0; // lower limit of the table
    upper = 300; // upper limit of the table
    step = 20; //step size
    fahr = lower;
    printf("Fahrenheit\tCelsius\n"); // Headings
    while(fahr <= upper){
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%3.0f\t\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
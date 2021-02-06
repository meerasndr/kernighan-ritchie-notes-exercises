#include <stdio.h>

struct car {
    char *name;
    float price;
    int speed;
};
void set_price(struct car *c, float newprice){
    //(*c).price = newprice;
    c->price = newprice;
}

int main(void){
    struct car saturn;
    saturn.name = "Saturn SL2";
    saturn.price = 3450.2;
    saturn.speed = 190;
    printf("The name of the car is %s\n", saturn.name);
    struct car jupiter = {.name="JK9", .speed=98};
    set_price(&jupiter, 900.1);
    printf("The car name is %s\n", jupiter.name);
    printf("The car price is %.2f\n", jupiter.price);
    printf("The car speed is %d\n", jupiter.speed);
}
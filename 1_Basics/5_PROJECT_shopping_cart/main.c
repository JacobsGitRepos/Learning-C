/* This mini project puts everything we've learnt together so far
    It is by no means perfect, but it is something
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Runtime variables
    char item[25] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '€';
    float total = 0.0f;

    // Main program
    printf("What item are you buying?\n");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) -1] = '\0';

    printf("What is the price of 1 of them?\n");
    scanf("%f", &price);

    printf("How many are you getting?\n");
    scanf("%d", &quantity);

    total = (price * quantity);
    printf("Your %d %s, comes to %c%.2f",quantity, item, currency, total);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

struct item
    {
        int quantity;
        int unitPrice;
};

int main() {
    

    struct item paratha;
    struct item vegetables;
    struct item water;
    int people;

    printf("Quantity of Paratha: ");
    scanf("%d", &paratha.quantity);

    printf("Unit Price: ");
    scanf("%d", &paratha.unitPrice);

    printf("Quantity of vegetables: ");
    scanf("%d", &vegetables.quantity);

    printf("Unit Price: ");
    scanf("%d", &vegetables.unitPrice);

    printf("Quantity of Mineral water: ");
    scanf("%d", &water.quantity);

    printf("Unit Price: ");
    scanf("%d", &water.unitPrice);
    
    printf("Number of People: ");
    scanf("%d", &people);

    int total = (paratha.quantity * paratha.unitPrice) + (vegetables.quantity * vegetables.unitPrice) + (water.quantity * water.unitPrice);

    float indi = total/people;

    printf("Individual people will pay: %.2f tk\n", indi);

    return 0;
}
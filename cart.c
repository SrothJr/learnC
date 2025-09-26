#include <stdio.h>
#include <string.h>

int main(){
    char item[15] = "";
    float price = 0.0f;
    int quantity = 0;

    printf("What item would you like to buy? : ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';
    printf("What is the price for each? : ");
    scanf("%f", &price);

    printf("How many would you like? : ");
    scanf("%d", &quantity);

    printf("\n\n");
    // printf("%s\n", item);
    // printf("%f\n", price);
    // printf("%d\n", quantity);

    if (quantity > 1) {
        printf("You have bought %d %ss\n", quantity, item);
    } else {
        printf("You have bought %d %s\n", quantity, item);
    }

    float total = price * quantity;

    printf("The total is: $%.2f", total);
    return 0;
}
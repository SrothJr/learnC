#include <stdio.h>
#include <stdbool.h>

int main(){
    // We use different specifiers to handle different types of data

    int age = 23;
    float price = 9.99;
    double pi =  3.1416259786;
    char currency = '$';
    char name[] = "Nazim";

    printf("%d  \n", age);
    printf("%f  \n", price);
    printf("%lf  \n", pi);
    printf("%c  \n", currency);
    printf("%s  \n", name);
    printf("\n\n\n\n");

    // modifiers


    // width
    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = 1000;
    int num5 = -1000;

    printf("%3d \n", num1); // Atleast 3 characters, if not there print empty
    printf("%-4d \n", num2); // left justify by adding negative (-) sign
    printf("%04d \n", num3); // Instead of empty, we add zeros

    // Flags
    printf("%+d \n", num4); // Shows the sign of the number
    printf("%+d \n", num5);
    printf("\n\n\n\n");

    //Precision

    float price1 = 19.99;
    float price2 = 1.5000;
    float price3 = -100.00;

    printf("%f \n", price1); // by default shows upto 6 decimal points
    printf("%.2f \n", price2); // Setting the num of digits to show after decimal point
    printf("\n\n\n\n\n");

    // width precision and flags together
    printf("%+9.2f \n", price3);

}
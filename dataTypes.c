#include <stdio.h>
#include <stdbool.h>


int main(){
    // %d (decimal) for integers and booleans
    // %f (float) for floats
    // %lf for doubles
    // %c for char
    // %s for strings

    // Integer type
    /*
    - Size = 4 bytes (32 bits) [IEEE Floating point single precision]
    - Only Whole numbers
    */
    int age = 23;
    int year = 2025;
    int quantity = 2;

    printf("You are %d years old\n", age);
    printf("The year is %d \n", year);
    printf("You have ordered %d items\n\n\n", quantity);

    //float type (6 to 7 digits after decimal (single precission))
    /*
    - Size = 4 bytes (32 bits) [IEEE floating point single precision]
    - Fractional numbers with 6 decimal points accuracy
    */
    
    float gpa = 3.65;
    float price = 19.99;
    float temperature = -10.1;


    printf("Your gpa is %f \n", gpa);
    printf("Your gpa is %.1f \n", gpa);
    printf("Your gpa is %.2f \n", gpa);
    printf("The price is %f \n", price);
    printf("Your gpa is %.2f \n", price);
    printf("Temperature is %.1f°F \n\n\n\n", temperature);
    
    // double type (15-16 digits after the decimal (double precision))
    /*
    - Size = 8 bytes (64 bits) [IEEE floating point double precision]
    Larger fraction number with 15 decimal points accuracy
    */
    double pi = 3.14151284854;
    double e = 2.718564514515;

    printf("Value of pi is %lf \n", pi); //6 digit default output
    printf("Value of pi is %.10lf \n", pi); //displaying more
    printf("Value of e is %.10lf \n\n\n\n", e);

    // Characters (stores single characters)
    /*
    - Size = 1 byte (8 bits) [1 memory cell]
    */
    char grade = 'A';
    char symbol = '!';
    
    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n\n\n\n", symbol);

    //Array of characters (string)
    /*
    Sequence of memory cells, starting from the first char
    */
    char name[] = "Md Nazim Hossain";
    char food[] = "Pizza";
    char email[] = "md.nazim.hossain@g.bracu.ac.bd";

    printf("Hello %s \n", name);
    printf("I love %s \n", food);
    printf("Your email is %s \n\n\n\n", email);

    //Boolean 
    /*
    - Size = 1 byte (8 bits) [1 memory cell, requires <stdbool.h>]
    */
    bool isOnline = false;
    bool withNum = 34; // 0 or 1, any larger number than 0 is also true

    printf("%d \n", isOnline);
    printf("%d \n", withNum); // output 1 for numbers higher than 0

    if(isOnline) {
        printf("You're online\n\n\n\n");
    } else{
        printf("You're offline\n\n\n\n");
    }

    // Home work

    int items = 65;
    float pricePerItem = 9.99;
    double total;

    char class = 'A';
    char customerName[] = "Nazim";
    bool valid = true;

    if(valid){
        total = items * pricePerItem;
        if (class == 'A'){
            total = total * 0.9;
        }
        printf("Dear %s, your total is $%.2lf \n", customerName, total);

    } else{
        printf("Transaction is not valid");
    }
    return 0;
}
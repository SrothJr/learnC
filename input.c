#include <stdio.h>
#include <string.h>

int main(){
    int Age;
    float Gpa;
    char Grade;
    char Name[30]; // Maximum size of 30 characters

    // Undefined behavior
    printf("%d\n", Age);
    printf("%f\n", Gpa);
    printf("%c\n", Grade);
    printf("%s\n", Name);

    // defining with place holders
    printf("\n\nNow with defined variables\n\n");
    int age = 0;
    float gpa = 0.0f; //floating number
    char grade = '\0'; //null character
    char name[30] = ""; //empty string

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    // input buffer will read \n and put that as our character for input
    printf("Enter your Grade: ");
    scanf(" %c", &grade); //add a space to skip over that new line char \n

    /*printf("Enter your name: ");
    scanf("%s", &name);*/ //Scanf can't read any white spaces
    
    printf("Enter your name: ");
    getchar();
    fgets(name, sizeof(name), stdin); // fgets function also reads the new line \n char as the last element of the array
    name[strlen(name) - 1] = '\0';


    printf("You're %d years old.\n", age);
    printf("Your GPA is: %.2f\n", gpa);
    printf("Your Grade is: %c\n", grade);
    printf("Your name is: %s\n", name);
    
    return 0;
}
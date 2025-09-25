#include <stdio.h>

int main(){
    int x = 2;
    float y = 3;
    float z;

    //z = x + y;
    //z = x - y;
    //z = x * y;
    z = x / y; // Output zero if int

    // for division to result in fraction, the output variable should be in float
    // and at least one of the parameters should be in float too

    printf("%f \n\n\n\n", z);

    int a = 10;
    int b = 3;
    int c;

    c = a % b; //Reminder

    printf("%d \n", c);

    b++;
    a--;

    printf("New b: %d \nNew a: %d\n\n", b, a);

    a += 2;
    b -= 2;
    // a*= 2;
    // b/= 2;

    printf("New a: %d\nNew b: %d\n\n", a, b);


}
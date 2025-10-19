#include <stdio.h>
#include <math.h>

int g; //Global var

int main(int argc, char const *argv[])
{
    int x; //local var

    int a = 6;
    int b = 2;

    printf("a + b: %d\n", a + b);
    printf("a - b: %d\n", a - b);
    printf("a * b: %d\n", a * b);
    printf("a / b: %d\n", a / b);
    printf("a %% b: %d\n", a % b);

    printf("%.2f\n", sqrt(5.6));
    return 0;
}

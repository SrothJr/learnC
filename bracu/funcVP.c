#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swapV(int a, int b);
void swapP(int *a, int *b);

int main(int argc, char const *argv[])
{
    int x  = 100;
    int y = 200;

    printf("X = %d\n", x);
    printf("y = %d\n", y);

    swapV(x, y);

    printf("X = %d\n", x);
    printf("y = %d\n", y);


    swapP(&x, &y);

    printf("X = %d\n", x);
    printf("y = %d\n", y);
  
    return 0;

}

void swapV(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapP(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
#include <stdio.h>

void increment5(int a) {
    a = a + 5;
    printf("Func a: %d\n", a);
}

void increment5byPtr(int *ptr) {
    *ptr = *ptr + 5;
}

int main(int argc, char const *argv[])
{
    int a;
    a = 2;
    printf("a: %d\n", a);

    printf("Address of a: %ld\n", &a);

    int *ptr;

    ptr = &a;

    printf("Value of p: %ld\n", ptr);
    printf("Addresss of p: %ld\n", &ptr);
    printf("Dereference value of p: %d\n", *ptr);

    *ptr = 5;

    printf("a: %d\n", a);

    printf("Value of p: %ld\n", ptr);
    ptr++;
    printf("Value of p: %ld\n", ptr);

    printf("a: %d\n", a);
    increment5(a);
    printf("a: %d\n", a);

    increment5byPtr(&a);

    printf("a: %d\n", a);

    return 0;
}

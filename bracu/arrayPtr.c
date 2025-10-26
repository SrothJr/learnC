#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3};

    int *ptr;

    ptr = arr;

    for (int i = 0; i < 3; i++) {
        printf("Address of element %d: %ld\n", i, ptr);
        printf("Value of element %d: %ld\n", i, *ptr);

        ptr ++;
    }

    return 0;
}

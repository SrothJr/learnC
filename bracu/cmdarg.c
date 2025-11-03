#include <stdio.h>
#include <stdlib.h>

void sort(int arr[], int size) {
    int temp;
    for (int i=0; i < size; i++){
        for (int j = i; j < size; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    printf("%d\n", argc);
    int count = argc;
    int arr[count - 1];
    for (int i = 1; i < count; i++) {
        arr[i - 1] = atoi(argv[i]);
    }

    sort(arr, count-1);

    for (int i = 0; i < count-1; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}

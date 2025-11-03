#include <stdio.h>

int main() {
    int arr[5][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = i + j * 100;
        }
        
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            printf("arr[%d][%d]= %d \n", i, j, arr[i][j]);
        }
    }

    printf("%d\n", arr[0][1]);
    
}
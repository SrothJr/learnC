#include <stdio.h>

int main(int argc, char const *argv[])
{   
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    if ((year % 400 == 0) || (!(year % 100 == 0) && year % 4 == 0)){
        printf("Year %d is leaf year\n", year);
    } else {
        printf("Year %d is not leaf year\n", year);
    }
    return 0;
}

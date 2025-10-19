#include <stdio.h>


int main(int argc, char const *argv[])
{
    int a;

    int size_a = sizeof(a);
    printf("int %d in bytes\n", size_a);

    float b;
    int size_b = sizeof(b);
    printf("float %d in bytes\n", size_b);

    double d;
    int size_d = sizeof(d);
    printf("double %d in bytes\n", size_d);

    char c;
    int size_c = sizeof(c);
    printf("char %d in bytes\n", size_c);


    return 0;
}

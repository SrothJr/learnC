#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int funcA(int a, int b){
    int i=a+b;
    return i;
}

int main(int argc, char const *argv[])
{
    int j = funcA(4, 5);

    printf("Func return: %d\n", j);
    return 0;
}

int funcB(){
    return 0;
}
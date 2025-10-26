#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char name[50];
    char id[8];
    float cgpa;
};




int main(int argc, char const *argv[])
{

    struct Student s1;
    struct Student s2;

    //Assign values

    strcpy(s1.name, "Nazim");
    strcpy(s1.id, "22299256");
    s1.cgpa = 3.69;

    strcpy(s2.name, "Tarif");
    strcpy(s2.id, "22299256");
    s2.cgpa = 3.99;
    
    printf("Student 1 name: %s\n", s1.name);
    printf("Student 1 ID: %s\n", s1.id);
    printf("Student 1 CGPA: %.2f\n", s1.cgpa);

    printf("Student 2 name: %s\n", s2.name);
    printf("Student 2 ID: %s\n", s2.id);
    printf("Student 2 CGPA: %.2f\n", s2.cgpa);

    return 0;
}

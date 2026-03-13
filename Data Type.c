#include<stdio.h>
int main()
{
    // Data types in C.

    int age = 16; // Integer

    float height = 5.6; // Floating point

    double pi = 3.141659; // Double

    char grade = 'A'; // Character

    printf("Age: %d", age);
    printf("\nHeight: %.1f", height);
    printf("\nPi: %.5lf", pi);
    printf("\nGrade: %c", grade);

    // Memory size of a Data Type

    printf("\nSize of an Integer: %zu", sizeof(age));


}

#include <stdio.h>
int main()
{
    int m = 29;
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n\n", m);
    printf("Now ab is assigned with the address of m.\n");
    int *ab = &m;
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n\n", *ab);
    m = 34;
    printf("The value m assigned to 34 now.");
    printf("Address of pointer ab : %p\n", ab);
    printf("Content of pointer ab : %d\n\n", *ab);
    *ab = 7; // dereference
    printf("The pointer variable ab is assigned with the value 7 now.\n");
    printf("Address of m : %p\n", &m);
    printf("Value of m : %d\n", m);
    return 0;
}
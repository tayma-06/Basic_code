#include <stdio.h>
int main()
{
    printf("Pointer : Demonstrate the use of & and * operator : \n");
    int m = 300;
    float fx = 300.600006;
    char cht = 'z';
    printf("Using & operator : \n");
    printf("address of m = %p\n", &m);
    printf("address of fx = %p\n", &fx);
    printf("address of cht = %p\n", &cht);
    printf("Using * operator : \n");
    printf("value of address of m = %d\n", *&m);
    printf("value of address of fx = %f\n", *&fx);
    printf("value of address of cht = %c\n", *&cht);
    return 0;
}